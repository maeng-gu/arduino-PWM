//123 출력하고 마지막 자리만
int count;
unsigned long remocon_micro;
unsigned long remocon_time_array[50];
unsigned int offset_value[50]; // 마이너스 값 저장
int number[8]; //0 1 값 저장하기
int remocon_callback = 0;
int ok = 0; //배열에서 값 확인하는 변수
int j;
int i;
int cheak[10][8] ={
{0,1,1,0,1,0,0,0}, //0
{0,0,1,1,0,0,0,0}, //1
{0,0,0,1,1,0,0,0}, //2
{0,1,1,1,1,0,1,0}, //3
{0,0,0,1,0,0,0,0}, //4
{0,0,1,1,1,0,0,0}, //5
{0,1,0,1,1,0,1,0}, //6
{0,1,0,0,0,0,1,0}, //7
{0,1,0,0,1,0,1,0}, //8
{0,1,0,1,0,0,1,0} //9
};

int dig[10][7] = {
  {1, 1, 1, 0, 1, 1, 1}, //0
  {0, 0, 1, 0, 1, 0, 0}, //1
  {1, 1, 0, 1, 1, 0, 1}, //2
  {0, 1, 1, 1, 1, 0, 1}, //3
  {0, 0, 1, 1, 1, 1, 0}, //4
  {0, 1, 1, 1, 0, 1, 1}, //5
  {1, 1, 1, 1, 0, 1, 0}, //6
  {0, 0, 1, 0, 1, 0, 1}, //7
  {1, 1, 1, 1, 1, 1, 1}, //8
  {0, 0, 1, 1, 1, 1, 1}, //9
};



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(1, remocon_ISR, FALLING);
    pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
}
int value[4] = {0, 0, 0, 0};

void loop() {
  // put your main code here, to run repeatedly:
    if(remocon_callback == 1) //콜백변수 값 확인
    {
      remocon_callback = 0;
          for(j = 18; j < 26 ; j++) //데이터 값 확인
          {
              if(offset_value[j] > 1000 && offset_value[j] < 1500)
             {
               number[j-18] = 0;
             }
               else if(offset_value[j] > 2000 && offset_value[j] < 2500)
             {
               number[j-18] = 1;
              }
           }

           
           ok = 0;
           for(j = 0 ; j < 10 ; j++)
           {
            for(int k = 0 ; k<8 ; k++)
            {
              if(number[k] == cheak[j][k])
              {
                ok = 1;
              }
              else
              {
              ok = 0;
              break;

               }
           }
           
           if(ok == 1)
           {
             value[3] = value[2];
             value[2] = value[1];
             value[1] = value[2];
             value[0] = j;

             Serial.println(value[0]);
             break;
            }
            
          }
    }
    //출력
    //-------------
digitalWrite(11, 1);
digitalWrite(12, 1);
digitalWrite(13, 1);
digitalWrite(14, 1);

digitalWrite(11, 0);
  for(i = 0 ; i <7 ; i++)
  {
    digitalWrite(i + 4, dig[1][i]);
  }
  delay(2);

//------------------
digitalWrite(11, 1);
digitalWrite(12, 1);
digitalWrite(13, 1);
digitalWrite(14, 1);

digitalWrite(12, 0);
  for(i = 0 ; i <7 ; i++)
  {
    digitalWrite(i + 4, dig[2][i]);
  }
  delay(2);
//--------------
  digitalWrite(11, 1);
digitalWrite(12, 1);
digitalWrite(13, 1);
digitalWrite(14, 1);

digitalWrite(13, 0);
  for(i = 0 ; i <7 ; i++)
  {
    digitalWrite(i + 4, dig[3][i]);
  }
  delay(2);

  //--------------
  digitalWrite(11, 1);
digitalWrite(12, 1);
digitalWrite(13, 1);
digitalWrite(14, 1);

digitalWrite(14, 0);
  for(i = 0 ; i <7 ; i++)
  {
    digitalWrite(i + 4, dig[value[0]][i]);
  }
  delay(2);
  
    //출력 부분 -------

}


void remocon_ISR()
{
  remocon_micro = micros();
  remocon_time_array[count] = remocon_micro;

  if(count > 0)
  {
    offset_value[count] = remocon_time_array[count] - remocon_time_array[count - 1];
  }
  if(offset_value[count] > 13000 && offset_value[count] < 14000) //다시 입력값이 들어오는 경우 count값을 초기화 하여 제대로 값이 들어오도록 함
   {
    count = 1;
   }

   if(offset_value[count] > 11000 && offset_value[count] < 12000) //리피드 값이 들어오는 경우 초기화
   {
    count = -1;
    Serial.println(value[4]);
   }
  
//판단
  count++;
  if(count > 33)
  {
    count = 0;
    remocon_callback = 1; // 루프로 가라
        
    }
  }
