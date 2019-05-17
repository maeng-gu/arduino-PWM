void setup() {
  pinMode(10, OUTPUT);
  Serial.begin(9600);

}

unsigned long previousMicros = 0;
unsigned long previousMicros1 = 0;

int toggle;
int hz[7] = {1916, 1707, 1515, 1433, 1276, 1136, 1012};
int ch = 0;

void loop() {
  unsigned long currentMicros = micros(); // 현재까지의 시간
  
  if(currentMicros - previousMicros > hz[ch]) //지정한 헤르츠를 저장
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
      
      toggle = !toggle;//토글
  }

  if(currentMicros - previousMicros1 > 1000000) //1초마다 음계변경
  {
      previousMicros1 = currentMicros; // 마지막 상태 변화
        ch++;
       if(ch == 7)
       {
          ch = 0;
       }
  }

}
