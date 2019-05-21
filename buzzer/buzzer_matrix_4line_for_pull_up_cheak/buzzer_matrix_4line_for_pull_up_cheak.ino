//pull up
// 5v - 저장 - pin - ㅣㅏ
void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
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
  
  pinMode(10,OUTPUT);
}

int getrow[4] = {1, 1, 1, 1};
int count_col = 6;
int flag[4][4] = { //matrix 값
{1, 1, 1, 1},
{1, 1, 1, 1},
{1, 1, 1, 1},
{1, 1, 1, 1} };
unsigned long per; //matrix 시간

//---------------
//buzzer 변수
unsigned long previousMicros = 0; //부저micros
int hz4[7] = {1916, 1707, 1515, 1433, 1276, 1136, 1012}; //도~시 음계
int cheakflag = 0; //키가 인식될 때 조건문 확인 변수
int play; //부저 hz mills 시간
int toggle; //부저 토글변수
int flag2 = 0; //부저 on off 변수

void loop() {
  unsigned long cur=millis();
  unsigned long currentMillis = millis(); // 현재까지의 시간

  if(cur - per > 10)
  {
    per = cur;

    for(int i = 2 ; i < 6 ; i++)
    {
            //all col h
        digitalWrite(6, 1);
        digitalWrite(7, 1);
        digitalWrite(8, 1);
        digitalWrite(9, 1);
        
        //one line col on
        digitalWrite(count_col, 0); //1~4on

          //get one pin 2
        getrow[i - 2] = digitalRead(i);    //get one pin 2

        if(getrow[i-2] == 1) //h일때
        {
          //printf only one
          
          if(flag[i-2][count_col - 6] == 0)
          {
              //Serial.println("LOW" + String(i-2) + String(count_col - 6));
              flag[i - 2] [count_col - 6] = 1;
              flag2 = 0;
              
          }
        }
        else
        {
          if(flag[i-2][count_col - 6] == 1)
          {
              //Serial.println("HIGH" + String(i-2) +  String(count_col - 6));
              flag[i-2] [count_col - 6] = 0;
              flag2 = 1;
              play = ((i-2)*4)+(col - 6);
          }
        }
            
    }
       count_col++;
      if(count_col == 10)
      {
        count_col = 6;
      }

  }

  //-----------------------------
//buzzer
      if(flag2 == 1)
      {
       
        unsigned long currentMicros = micros(); // 현재까지의 시간
        
        if(currentMicros - previousMicros > hz[play])
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

             toggle = !toggle;
        }
        
      }


      
  
}
