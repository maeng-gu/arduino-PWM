//pull down 회로

void setup() {
  //matrix
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);

  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  //buzzer
  pinMode(10, OUTPUT);
  
  Serial.begin(9600);
}

unsigned long previousMicros = 0; //부저micros
//---
int hz4[7] = {1916, 1707, 1515, 1433, 1276, 1136, 1012}; //도~시 음계
int flag[4][4] = {0,} ; //high, row 확인배열
int get_row[4] = {0, }; //row값 받음
unsigned long per = 0; //matrix 시간 저장
int col = 6; //on하는 col에 핀 번호
int toggle; //부저 토글변수
int flag2 = 0; //부저 on off 변수
int go; //도~시 번호

void loop() {
  unsigned long cur=millis(); //현재까지의 시간

  if(cur - per > 10) //지정한 시간이 되었을 때
  {
      per = cur; //마지막 상태 변화 저장
      
      for (int i = 2 ; i < 6 ; i++)
      {
        digitalWrite(6, 0);
        digitalWrite(7, 0);
        digitalWrite(8, 0);
        digitalWrite(9, 0);
        
        digitalWrite(col, 1); //한줄 high
        
        get_row[i-2] = digitalRead(i); //하나의 값을 받음
        
        if (get_row[i-2] == 1)
        {
          if (flag[i-2][col-6] == 0) //low인 상태라면
          {
              go = ((i-2)*4)+(col - 6); //값을 보내고
              flag[i-2][col - 6] = 1;  //확인 플래그 변수 하이
              flag2 = 1; //플래그 온
            }
         }
         else
         {
            if (flag[i-2][col-6] == 1) //high 상태라면
            {
               flag[i-2][col - 6] = 0; //확인 플래스 변수 로우
               flag2 = 0; //플래그 로우
               digitalWrite(10, 0); //부저 off 확인
            }
          }
      
       }
         col++;
         if(col ==10)
         col = 6;
       
    
  }
  
       if(flag2 == 1)
       {
        unsigned long currentMicros = micros(); // 현재까지의 시간
        //----------
                if(currentMicros - previousMicros > hz4[go]) //지정한 헤르츠를 저장
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


}
