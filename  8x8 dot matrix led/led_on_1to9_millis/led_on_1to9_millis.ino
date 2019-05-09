void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3,  OUTPUT);
  pinMode(4,  OUTPUT);
  pinMode(5,  OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
}

char binary[10][8] ={
  {0x00, 0x38, 0x44, 0x4c, 0x54, 0x64, 0x44, 0x38},
  {0x00, 0x10, 0x30, 0x50, 0x10, 0x10, 0x10, 0x7c},
  {0x00, 0x38, 0x44, 0x04, 0x08, 0x10, 0x20, 0x7c},
  {0x00, 0x38, 0x44, 0x04, 0x18, 0x04, 0x44, 0x38},
  {0x00, 0x08, 0x18, 0x28, 0x48, 0x7c, 0x08, 0x08},
  {0x00, 0x7c, 0x40, 0x78, 0x04, 0x04, 0x44, 0x38},
  {0x00, 0x38, 0x40, 0x40, 0x78, 0x44, 0x44, 0x38},
  {0x00, 0x7c, 0x04, 0x08, 0x10, 0x20, 0x20, 0x20},
  {0x00, 0x38, 0x44, 0x44, 0x38, 0x44, 0x44, 0x38},
  {0x00, 0x38, 0x44, 0x44, 0x3c, 0x04, 0x44, 0x38}
};
int number = 0;
int ch, i;
unsigned long previousmicros = 0;
unsigned long previousMillis = 0;
int j = 0;


void loop() {
    unsigned long currentmicros = micros(); // 현재까지 시간을 저장
     unsigned long currentMillis = millis(); // 현재까지 시간을 저장


  if(currentmicros - previousMillis > 2000) { // 지정한 시간을 초과한 경우
    previousmicros = currentmicros; // 마지막 상태 변화 시간 저장


    //all row off  
      for(int i = 2 ; i < 10 ; i++)
       {
         digitalWrite(i, 0);
        }

        //one col value
        for(i = 0 ; i < 8 ; i++)
         {
             ch = i + 10;
             if(binary[number][j] & (0x80 >> i))
              {
                 digitalWrite (ch, 0);
              }
                else 
              {
                digitalWrite(ch, 1);
              }
         }
           //one row on
         digitalWrite (j+2, 1);         

      j++;
      if(j == 8)
        j = 0;
  }

  
   if(currentMillis - previousMillis >= 1000) 
   {
        previousMillis = currentMillis; // 마지막 상태 변화 시간 저장
     number++;
     if(number == 10)
     {
      number = 0;
     }
   }

}
