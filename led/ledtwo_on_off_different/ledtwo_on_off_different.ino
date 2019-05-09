//Led2개 서로 다르게 켜고 끄고 하기
void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT); //13번 led연결
  pinMode (12, OUTPUT); //12번 led연결
}

int count = 0;
int count1 = 0;
int counta, countb;
int duty = 0;
int duty1 = 0;

void loop() {
  // put your main code here, to run repeatedly:
  count ++; // 카운트 값 증가

  if(count == 100) //카운트가 100이 된다면 count값은 0으로 가서 처음부터 시작
  {
    count = 0;
    digitalWrite(13, HIGH); //led켜기
  }
  else if(count == duty1) //duty와 값이 같으면 led 끄기
  {
    digitalWrite(13, LOW); //길면 길수록 밝기가 낮아짐
  }

  
  count1 ++;

  if(count1 == 100) 
  {
    count1 = 0;
    digitalWrite(12, HIGH);
  }
  else if(count1 == duty)
  {
    digitalWrite(12, LOW);
  }



  counta++;
  if(counta == 200)
  {
    counta = 0;
    duty++;
    if(duty == 100)
    {
      duty = 0;
    }
    
  }
  
countb++;
   if(countb == 100)
  {
    countb = 0;
    duty1++;
    if(duty1 == 100)
    {
      duty1 = 0;
    }
    
  }
  

  delayMicroseconds(100);
  
}
