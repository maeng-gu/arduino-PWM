
// 누른시간 저장 후 출력
unsigned long in, out;
void setup() {
  // put your setup code here, to run once:
  attachInterrupt(0, myISR, CHANGE);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void myISR()
{
  if(digitalRead(2) == 0)
  {
    in = millis();
  }
  else
  {
    out = millis();
    Serial.println(out - in);
  }
}
