//리모콘 값이 들어오면 마이크로스 출력하기
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

void remocon_ISR()
{
  remocon_micro = micros();
  count++;
  Serial.println(remocon_micro);
}
