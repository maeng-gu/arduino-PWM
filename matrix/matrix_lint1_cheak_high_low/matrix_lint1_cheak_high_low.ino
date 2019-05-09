//Col2 -> 7번에 연결 -> 아웃풋
//첫번째 줄 low high 구분하기
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
int a = 0;
int flag1 = 0;
int flag2 = 0;
int flag3 = 0;
int flag4 = 0;

void loop() {
  // put your main code here, to run repeatedly:
  ///////key1///////
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
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
   
   delay (10);
   //////////key2/////////
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  a=digitalRead(2);
  
  if(a==1) 
  {
    if (flag2 == 0)
    {
      Serial.println("HIGH 2");
      flag2 = 1;
    }
  }
  else
  {
    if(flag2 == 1)
    {
    Serial.println("LOW 2");
    flag2 = 0;
    }
  }
   
   delay (10);
   //////////key3/////////
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
  digitalWrite(9, 0);
  a=digitalRead(2);
  
  if(a==1) 
  {
    if (flag3 == 0)
    {
      Serial.println("HIGH 3");
      flag3 = 1;
    }
  }
  else
  {
    if(flag3 == 1)
    {
    Serial.println("LOW 3");
    flag3 = 0;
    }
  }
   
   delay (10);
    //////////key4/////////
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 1);
  a=digitalRead(2);
  
  if(a==1) 
  {
    if (flag4 == 0)
    {
      Serial.println("HIGH 4");
      flag4 = 1;
    }
  }
  else
  {
    if(flag4 == 1)
    {
    Serial.println("LOW 4");
    flag4 = 0;
    }
  }
   
   delay (10);
}
