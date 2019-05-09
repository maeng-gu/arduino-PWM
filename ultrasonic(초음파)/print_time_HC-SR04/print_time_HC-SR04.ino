//초음파 센서를 이용해 시간 측정
//Vcc는 5볼트
//트래거는 출력 5번
//에코는 입력 2번
//10마이크로세크단위로 쏴서 차이를 측정하는 코드

unsigned long in, out;
int goPin = 5;

void setup() {
  // put your setup code here, to run once:
  attachInterrupt(0, myISR, CHANGE);
  Serial.begin(9600);
  pinMode(goPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, 1);
  delayMicroseconds(10);
  digitalWrite(5, 0);
  delay(1000);
}

void myISR()
{
  
  if(digitalRead(2) == 1)
  {
    in = micros();
  }
  else
  {
    out = micros();
    Serial.println(out - in);
  }
}
