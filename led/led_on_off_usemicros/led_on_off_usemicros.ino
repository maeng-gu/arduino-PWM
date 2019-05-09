//Led 껏다 켰다

int ledPin = 13; //led연결핀
int ledState = LOW; //led는 끈 상태로 시작
unsigned long previousMicros = 0; //맞지막으로 led를 끈 시간을 저장
int count = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode (ledPin, OUTPUT);//led연결 핀을 출력으로 설정
}


void loop() {
  // put your main code here, to run repeatedly:
 unsigned long currentMicros = micros(); //현재까지의 시작 , 밀리 세컨드 단위로 카운트 // millis에서 반환되는 값-> 현재 시간을 밀리스로 반환 -> 아두이노 전원을 넣는 것을 기준으로 시작
 //unsigned long currentMicros = micros(); 마이크로세컨드 단위로 카운트 -> 밀리세컨드와는 x1000

 if(currentMicros - previousMicros >= 100) // 지정한 시간을 초과한 경우
 {
  previousMicros = currentMicros; //마지막 상태 변화 시간 저장
  
  count++;
  if(count == 1000)
  {
    digitalWrite(13, 1);
    count = 0; 
  }
  else if(count == 500)
  {
    digitalWrite(13, 0);
  }
  
  }
}
