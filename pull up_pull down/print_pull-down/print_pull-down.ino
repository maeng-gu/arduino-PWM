//풀다운 출력


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
  if(digitalRead(2) == 1)
  {
    Serial.println("1");
  }
  else
  {
    Serial.println("0");
  }
}
