//리모콘이 수신되었을 때 시간 저장
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
unsigned long remocon_savetime_array[35];

void remocon_ISR()
{
  remocon_micro = micros();
  remocon_savetime_array[count] = remocon_micro;
  
  count++;
  if(count > 33)
  {
    count = 0;
  }
}
