#define c 0
#define d 1
#define e 2
#define f 3
#define g 4
#define a 5
#define b 6


void setup() {
  pinMode(10, OUTPUT);
  Serial.begin(9600);

}

unsigned long previousMicros = 0; //음계
unsigned long previousMillis = 0; //timer
unsigned long previousMillis1 = 0; //timer


int toggle;
int music[24] = {g, g, a,a,g,g,e,g,g,e,e,d, g,g, f,f,g,g,e, g,e,d,e,c};
int beat[24] = {325,325,325,325,325,325,500,325,325,325,325,500, 325,325,325,325,325,325,500,325,325,325,325,500};

int flag = 1;


int hz4[7] = {1916, 1707, 1515, 1433, 1276, 1136, 1012};
  

int ch = 0;

void loop() {
  unsigned long currentMicros = micros(); // 현재까지의 시간
  unsigned long currentMillis = millis(); // 현재까지의 시간

  if(flag == 1)
  {
    int k = music[ch];
    if(currentMicros - previousMicros > hz4[k]) //지정한 헤르츠를 저장
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
  }

 
  if(currentMillis - previousMillis > beat[ch]) //저장된 박자마다 음계변경 
  {
       previousMillis = currentMillis; // 마지막 상태 변화
       previousMillis1 = currentMillis; // 쉬는 부분 마지막 상태 변화

       
       ch++;
        if(ch == 24)
        {
          ch = 0;
        }
        
        flag = true;
  }

   if(currentMillis - previousMillis1 > beat[ch]-75) //75ms 쉬기
  {
       previousMillis1 = currentMillis; // 마지막 상태 변화
       flag = false; //off
  }

}
