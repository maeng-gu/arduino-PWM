void setup() {
  pinMode(10, OUTPUT);
  Serial.begin(9600);

}

unsigned long previousMicros = 0;
int toggle;

void loop() {
  unsigned long currentMicros = micros(); // 현재까지의 시간
  
  if(currentMicros - previousMicros > 1276) //지정한 시간을 초과한 경우
  {
      previousMicros = currentMicros; // 마지막 상태 변화 시간 저장

      if(toggle)
      {
        digitalWrite(10, 1);
      }
      else
      {
        digitalWrite(10, 0);
      }
      
      toggle = !toggle;
  }

}
