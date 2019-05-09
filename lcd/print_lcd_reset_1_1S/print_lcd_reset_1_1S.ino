
//초기화 하고 다시 1
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

void setup() {
  int i;
  for(i=3 ; i<24 ; i++)
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

/////////0x38
      //////////////////////////////////////
    digitalWrite(RS, LOW);
    digitalWrite(RW, LOW);
   //데이터 0x30 ( 0 0 1 1 1 0 0 0)
   digitalWrite(DB7, LOW);
   digitalWrite(DB6, LOW);
   digitalWrite(DB5, HIGH);
   digitalWrite(DB4, HIGH);
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

    /////////0x06
      //////////////////////////////////////
    digitalWrite(RS, LOW);
    digitalWrite(RW, LOW);
   //데이터 0x30 ( 0 0 0 0  0 1 1 0)
   digitalWrite(DB7, LOW);
   digitalWrite(DB6, LOW);
   digitalWrite(DB5, LOW);
   digitalWrite(DB4, LOW);
   digitalWrite(DB3, LOW);
   digitalWrite(DB2, HIGH);
   digitalWrite(DB1, HIGH);
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
    
        /////////0x0C
      //////////////////////////////////////
    digitalWrite(RS, LOW);
    digitalWrite(RW, LOW);
   //데이터 0x ( 0 0 0 0  1 1 0 0)
   digitalWrite(DB7, LOW);
   digitalWrite(DB6, LOW);
   digitalWrite(DB5, LOW);
   digitalWrite(DB4, LOW);
   digitalWrite(DB3, HIGH);
   digitalWrite(DB2, HIGH);
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
    
    /////////0x80
      //////////////////////////////////////
    digitalWrite(RS, LOW);
    digitalWrite(RW, LOW);
   //데이터 0x30 ( 1 0 0 0  0 0 0 0)
   digitalWrite(DB7, HIGH);
   digitalWrite(DB6, LOW);
   digitalWrite(DB5, LOW);
   digitalWrite(DB4, LOW);
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
    
    /////////0x01
      //////////////////////////////////////
    digitalWrite(RS, LOW);
    digitalWrite(RW, LOW);
   //데이터 0x30 ( 0 0 0 0  0 0 0 1)
   digitalWrite(DB7, LOW);
   digitalWrite(DB6, LOW);
   digitalWrite(DB5, LOW);
   digitalWrite(DB4, LOW);
   digitalWrite(DB3, LOW);
   digitalWrite(DB2, LOW);
   digitalWrite(DB1, LOW);
   digitalWrite(DB0, HIGH); 
   //인에이블 1, 0  
    digitalWrite(EN, HIGH);
    digitalWrite(EN, LOW);
    //RS. RW
    digitalWrite(RS, HIGH);
    digitalWrite(RW, HIGH);
    //delay
    delay(3);
    //////////////////////////////////////////// 
        
}

void loop() {
 
        /////////0x31
      //////////////////////////////////////
    digitalWrite(RS, HIGH);
    digitalWrite(RW, LOW);
   //데이터 0x31 (  0 0 1 1  0 0 0 1)
   digitalWrite(DB7, LOW);
   digitalWrite(DB6, LOW);
   digitalWrite(DB5, HIGH);
   digitalWrite(DB4, HIGH);
   digitalWrite(DB3, LOW);
   digitalWrite(DB2, LOW);
   digitalWrite(DB1, LOW);
   digitalWrite(DB0, HIGH); 
   //인에이블 1, 0  
    digitalWrite(EN, HIGH);
    digitalWrite(EN, LOW);
    //RS. RW
    digitalWrite(RS, HIGH);
    digitalWrite(RW, HIGH);
    //////////////////////////////////////////// 
    delay(1000);
}
