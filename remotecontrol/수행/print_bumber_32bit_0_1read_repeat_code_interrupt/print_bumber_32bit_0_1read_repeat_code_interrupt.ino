//33개에 리모콘 수신 시간차 출력
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(0, remocon_ISR, FALLING);
}

int count = 0;
int callback = 0;
unsigned long remocon_micro;
unsigned long remocon_time_array[50];
unsigned long remocon_minus_time_array[50];
int number[8];
int ok= 0;
int value;
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

void loop() {
  // put your main code here, to run repeatedly:
  
  if(callback == 1)
  {
    callback = 0;

    for(int j = 18; j < 26 ; j++)
    {
        if(remocon_minus_time_array[j] > 1000 && remocon_minus_time_array[j] < 1500)
        {
          Serial.print ("0");
          number[j-18] = 0;
        }
        else if(remocon_minus_time_array[j] > 2000 && remocon_minus_time_array[j] < 2500)
        {
          Serial.print("1");
          number[j-18] = 1;
        }
        
    }
       Serial.println();
       
       ok = 0;
      for(int j = 0 ; j < 10 ; j++)
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


  if(count > 0) //시간차 저장
  {
    remocon_minus_time_array[count] = remocon_time_array[count] - remocon_time_array[count-1];
  }

  if(remocon_minus_time_array[count] > 13000 && remocon_minus_time_array[count] < 14000) // lead code 판별
  {
    count = 1;
  }
   if(remocon_minus_time_array[count] > 11000 && remocon_minus_time_array[count] < 12000) //리피드 값이 들어오는 경우 초기화
   {
    count = -1;
    Serial.println(value);
   }
   
  count++;
  
  if(count > 33)
  {
    count = 0;
    callback = 1;
  }

}
