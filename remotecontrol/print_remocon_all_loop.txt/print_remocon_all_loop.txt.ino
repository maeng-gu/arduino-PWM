//루프로 가능한 모든 것을 넘긴 후, 입력 값을 출력
int count;
unsigned long remocon_micro;
unsigned long remocon_time_array[50];
unsigned int offset_value[50]; // 마이너스 값 저장
int number[8]; //0 1 값 저장하기
int remocon_callback = 0;
int ok = 0; //배열에서 값 확인하는 변수
int j;
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


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(1, remocon_ISR, FALLING);
}
int value = 0;

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
            value = j;
             Serial.println(value);
             break;
            }
            
          }
    }
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
    Serial.println(value);
   }
  
//판단
  count++;
  if(count > 33)
  {
    count = 0;
    remocon_callback = 1; // 루프로 가라
        
    }
  }
