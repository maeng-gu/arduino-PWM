//1초동안 led 껏다 켰다 하기
void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i = 0 ; i < 10 ; i++)
  {
      digitalWrite(13, HIGH);
      delayMicroseconds(1000);
      digitalWrite (13, LOW);  
      delayMicroseconds(9000);
  }

  for(i = 0 ; i < 10 ; i++)
  {
      digitalWrite(13, HIGH);
      delayMicroseconds(5000);
      digitalWrite (13, LOW);  
      delayMicroseconds(5000);
  }
}
