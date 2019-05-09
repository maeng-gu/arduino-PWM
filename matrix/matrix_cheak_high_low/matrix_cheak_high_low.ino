//메티릭스 4*4 첫번째 줄 하이 로우 판별하기
//Row1 => input (2)
//Col1 => 4.7k 풀다운 아웃풋
//풀래그로 한번만 출력
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(6, OUTPUT);
}
int a = 0;
int flag1 = 0;

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6, 1);
  a=digitalRead(2);
  
  if(a==1) 
  {
    if (flag1 == 0)
    {
      Serial.println("HIGH");
      flag1 = 1;
    }
  }
  else
  {
    if(flag1 == 1)
    {
    Serial.println("LOW");
    flag1 = 0;
    }
  }
   
   delay (100);

}
