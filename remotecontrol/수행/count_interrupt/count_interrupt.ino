//리모콘이 수신되었을 때 인터럽트 수 출력
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(1, remocon_ISR, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
}

int interr;

void remocon_ISR()
{
  interr ++;
  Serial.println("remocon_ISR" + String(interr));
}
