//33개에 리모콘 수신 시간차 출력
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(1, remocon_ISR, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

int count;
unsigned long remocon_micro;
unsigned long remocon_time_array[50];
unsigned long remocon_minus_time_array[50];


void remocon_ISR()
{
  remocon_micro = micros();
  remocon_time_array[count] = remocon_micro;
  count++;
   
  if(count > 33)
  {
    count = 0;
    for(int i = 0 ; i < 34 ; i++)
    {
      remocon_minus_time_array[i] = remocon_time_array[i+1] - remocon_time_array[i];
      Serial.print (remocon_minus_time_array[i]);
    }
    Serial.println();
  }
}
