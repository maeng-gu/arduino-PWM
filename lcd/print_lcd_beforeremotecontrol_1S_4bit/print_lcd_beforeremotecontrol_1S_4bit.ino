//리모컨 하기 전
#define RS 3
#define RW 4
#define EN 5

#define DB0 6
#define DB1 7
#define DB2 8
#define DB3 9
#define DB4 10
#define DB5 11
#define DB6 12
#define DB7 13

void char_4bit_inst_write(unsigned char data, char check) {
    if(check == 1){
    digitalWrite(RS, 1);
    digitalWrite(RW, LOW);
    }
    else
    {
    digitalWrite(RS, 0);
    digitalWrite(RW, LOW); 
      }

    int i;
    for(i=0;i<4;i++)
    {
      if(data&(0x08 >> i))
      {
        digitalWrite(13-i, HIGH);
      }
      else
      {
        digitalWrite(13-i, LOW);
      }
    }
    
    //인에이블 1, 0  
    digitalWrite(EN, HIGH);
    digitalWrite(EN, LOW);
    //RS. RW
    digitalWrite(RS, HIGH);
    digitalWrite(RW, HIGH);
    //delay
    delayMicroseconds(100);
}

void setup() {
  int i;
  for(i=3 ; i<14 ; i++)
  {
    pinMode(i, OUTPUT);
  }

    Serial.begin(9600);

    digitalWrite(RS, HIGH);
    digitalWrite(RW, HIGH);

      //////////////////////////////////////
    digitalWrite(RS, LOW);
    digitalWrite(RW, LOW);
   //데이터 0x30 ( 0 0 1 1 0 0 0 0)
   digitalWrite(DB7, LOW);
   digitalWrite(DB6, LOW);
   digitalWrite(DB5, HIGH);
   digitalWrite(DB4, HIGH);
   digitalWrite(DB3, LOW);
   digitalWrite(DB2, LOW);
   digitalWrite(DB1, LOW);
   digitalWrite(DB0, LOW); 
   //인에이블 1, 0  
    digitalWrite(EN, HIGH);
    digitalWrite(EN, LOW);
    //RS. RW
    digitalWrite(RS, HIGH);
    digitalWrite(RW, HIGH);
    //delay
    delayMicroseconds(100);
    ////////////////////////////////////////////
    
    /////////0x30
    //////////////////////////////////////
    digitalWrite(RS, LOW);
    digitalWrite(RW, LOW);
   //데이터 0x30 ( 0 0 1 1 0 0 0 0)
   digitalWrite(DB7, LOW);
   digitalWrite(DB6, LOW);
   digitalWrite(DB5, HIGH);
   digitalWrite(DB4, HIGH);
   digitalWrite(DB3, LOW);
   digitalWrite(DB2, LOW);
   digitalWrite(DB1, LOW);
   digitalWrite(DB0, LOW); 
   //인에이블 1, 0  
    digitalWrite(EN, HIGH);
    digitalWrite(EN, LOW);
    //RS. RW
    digitalWrite(RS, HIGH);
    digitalWrite(RW, HIGH);
    //delay
    delayMicroseconds(100);
    ////////////////////////////////////////////

        /////////0x30
    //////////////////////////////////////
    digitalWrite(RS, LOW);
    digitalWrite(RW, LOW);
   //데이터 0x30 ( 0 0 1 1 0 0 0 0)
   digitalWrite(DB7, LOW);
   digitalWrite(DB6, LOW);
   digitalWrite(DB5, HIGH);
   digitalWrite(DB4, HIGH);
   digitalWrite(DB3, LOW);
   digitalWrite(DB2, LOW);
   digitalWrite(DB1, LOW);
   digitalWrite(DB0, LOW); 
   //인에이블 1, 0  
    digitalWrite(EN, HIGH);
    digitalWrite(EN, LOW);
    //RS. RW
    digitalWrite(RS, HIGH);
    digitalWrite(RW, HIGH);
    //delay
    delayMicroseconds(100);
    ////////////////////////////////////////////   
    
/////////0x28 4비트 설정
      //////////////////////////////////////
    digitalWrite(RS, LOW);
    digitalWrite(RW, LOW);
   //데이터 0x28 ( 0 0 1 0 1 0 0 0)
   digitalWrite(DB7, LOW);
   digitalWrite(DB6, LOW);
   digitalWrite(DB5, HIGH);
   digitalWrite(DB4, 0);
   digitalWrite(DB3, HIGH);
   digitalWrite(DB2, LOW);
   digitalWrite(DB1, LOW);
   digitalWrite(DB0, LOW); 
   //인에이블 1, 0  
    digitalWrite(EN, HIGH);
    digitalWrite(EN, LOW);
    //RS. RW
    digitalWrite(RS, HIGH);
    digitalWrite(RW, HIGH);
    //delay
    delayMicroseconds(100);
    //////////////////////////////////////////// 

    ///여기부터 4비트 루룰
    //---------------------------
    
    char_4bit_inst_write(0x02,0);
    char_4bit_inst_write(0x08,0);
    
    char_4bit_inst_write(0x00, 0);
    char_4bit_inst_write(0x06, 0);
    
    char_4bit_inst_write(0x00, 0);
    char_4bit_inst_write(0x0c, 0);

    char_4bit_inst_write(0x08, 0);
    char_4bit_inst_write(0x00, 0);

    char_4bit_inst_write(0x00, 0);
    char_4bit_inst_write(0x01, 0);

}

void loop() {

    char_4bit_inst_write(0x03,1);
    char_4bit_inst_write(0x01,1);
    delay(1000);
}
