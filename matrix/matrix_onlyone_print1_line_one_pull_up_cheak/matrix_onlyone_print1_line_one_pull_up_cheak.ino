//pull up
// 5v - 저장 - pin - ㅣㅏ
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //ROW
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);

  //COL
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

int getrow;
unsigned long per;
int flag = 1;


void loop() {
  unsigned long cur=millis();
  if(cur - per > 10)
  {
    per = cur;

    digitalWrite(6, 0); //하나의 col 켜두고

    getrow = digitalRead(2); //row에 값을 계속 받아옴.
    
    if(getrow == 1)
    {
      if(flag == 0)
      {
          Serial.println("HIGH");
          flag = 1;
      }
    }
    else
    {
      if(flag == 1)
      {
          Serial.println("LOW");
          flag = 0;
      }
    }
    
  
  }
      
  
}
