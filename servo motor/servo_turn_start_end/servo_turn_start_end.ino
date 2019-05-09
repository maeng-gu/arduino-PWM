//가변으로 모터
void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
}

int count = 0;
int i = 0;
int count1 = 0;
int duty = 0;

void loop() {
  // put your main code here, to run repeatedly:
  count ++;void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
}

int i, j;

void loop() {

  for (i = 0 ; i < 50 ; i++)
  {  
 digitalWrite(9,1);
 delayMicroseconds(700);
 digitalWrite(9, 0);
 delay(17);
 delayMicroseconds(2300);

  }

    for (i = 0 ; i < 50 ; i++)
  {  
 digitalWrite(9,1);
 delayMicroseconds(2300);
 digitalWrite(9, 0);
 delay(17);
 delayMicroseconds(700);

  }
 
}
  if(count ==100) 
  {
    count = 0;
    digitalWrite(13,1);
  }
  else if(count == duty)
  {
    digitalWrite(13, 0);
  }
  
   
  //가변코드
  count1++;
  if(count1 == 10000)
  {
    duty++;
      if(duty == 100)
  {
    duty = 0;
  }
    count1 = 0;
  }



  delayMicroseconds(100);

}
