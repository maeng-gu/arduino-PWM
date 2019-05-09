//천천히 밝아지기
void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i, s;
  for(s = 0 ; s < 10000 ; s+=100)
  {
     for(i = 0 ; i < 10 ; i++) //0.1초동안 led 키는 부분
     {
          digitalWrite(13, HIGH);
          delayMicroseconds(s);
         digitalWrite (13, LOW);  
         delayMicroseconds(10000-s);
     }
  }
 
}
