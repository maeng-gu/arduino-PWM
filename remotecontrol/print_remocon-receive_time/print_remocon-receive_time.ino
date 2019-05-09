//33개에 리모콘 수신 시간 출력
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

void remocon_ISR()
{
  remocon_micro = micros();
  remocon_time_array[count] = remocon_micro;
  count++;
  if(count > 33)
  {
    count = 0;
    for(int j = 0 ; j < 33 ; j++)
    {
      Serial.print (remocon_time_array[j]);
    }
    Serial.println();
  }
}
