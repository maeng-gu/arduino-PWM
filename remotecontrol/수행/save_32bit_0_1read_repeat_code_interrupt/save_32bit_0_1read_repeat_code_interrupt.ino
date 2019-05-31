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

void loop() {
  // put your main code here, to run repeatedly:
  
  if(callback == 1)
  {
    callback = 0;
    for(int j = 0 ; j < 34 ; j++)
    {
      Serial.print(remocon_minus_time_array[j]);
    }
    Serial.println();

    for(int j = 0 ; j < 34 ; j++)
    {
            if(remocon_minus_time_array[j] > 1000 && remocon_minus_time_array[j] < 1500)
            {
              Serial.print ("0");
            }
            else if(remocon_minus_time_array[j] > 2000 && remocon_minus_time_array[j] < 2500)
            {
              Serial.print("1");
             }
     }
    Serial.println();

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
    Serial.println("R");
   }
   
  count++;
  
  if(count > 33)
  {
    count = 0;
    callback = 1;
  }

}
