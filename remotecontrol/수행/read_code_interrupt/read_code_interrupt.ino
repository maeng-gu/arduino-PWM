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

void loop() {
  // put your main code here, to run repeatedly:
  
  if(callback == 1)
  {
    callback = 0;
        for(int i = 0 ; i < 34 ; i++)
       {
           Serial.println (remocon_minus_time_array[i]);
        }
       //Serial.println();
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

   
  count++;
  
  if(count > 33)
  {
    count = 0;
    callback = 1;
  }

}
