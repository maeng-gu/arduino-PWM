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
int count_col = 6;
int flag[4] = {1, 1, 1, 1};
unsigned long per;


void loop() {
  unsigned long cur=millis();
  if(cur - per > 10)
  {
    per = cur;

  //all col h
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
    digitalWrite(9, 1);
    
    //one line col on
    digitalWrite(count_col, 0); //1~4 col 값 순차적으로 받기

    //get one pin 2
    getrow = digitalRead(2);

    if(getrow == 1) //h일때
    {
      //printf only one
      
      if(flag[count_col - 6] == 0)
      {
          Serial.println("HIGH" + String(count_col - 6));
          flag[count_col - 6] = 1;
      }
    }
    else
    {
      if(flag[count_col - 6] == 1)
      {
          Serial.println("LOW" + String(count_col - 6));
          flag[count_col - 6] = 0;
      }
    }






    
       count_col++;
      if(count_col == 10)
      {
        count_col = 6;
      }
  }


      
  
}
