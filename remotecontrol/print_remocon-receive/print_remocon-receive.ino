//리모콘이 수신 되었을때 출력
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(1, remocon_ISR, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

int count;

void remocon_ISR()
{
  count++;
  Serial.println("haha:" + String(count));
}
