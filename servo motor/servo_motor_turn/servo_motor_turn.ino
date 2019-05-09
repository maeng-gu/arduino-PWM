
//모터 돌리기
void setup() {
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
