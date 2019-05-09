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

char a = 0x00;
char b = 0x38;
char c = 0x44;
char d = 0x04;
char e = 0x08;
char f = 0x10;
char g = 0x20;
char h = 0x7c;
int i;
int ch;


void loop() {
///// 첫번째 줄----
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  
  for(i = 0 ; i < 8 ; i++)
  {
    ch = i + 10;
    if(a & (0x80 >> i))
     {
      digitalWrite (ch, 0);
     }
     else 
     {
      digitalWrite(ch, 1);
     }
  }
  digitalWrite (2, 1);
  delay(2);
  //두번째 줄-----------------------------
  
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  
  for(i = 0 ; i < 8 ; i++)
  {
    ch = i + 10;
    if(b & (0x80 >> i))
     {
      digitalWrite (ch, 0);
     }
     else 
     {
      digitalWrite(ch, 1);
     }
  }
  digitalWrite (3, 1);
    delay(2);

 //세번째 줄-----------------------------
  
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  
  for(i = 0 ; i < 8 ; i++)
  {
    ch = i + 10;
    if(c & (0x80 >> i))
     {
      digitalWrite (ch, 0);
     }
     else 
     {
      digitalWrite(ch, 1);
     }
  }
  digitalWrite (4, 1);
  delay(2);

   //네번째 줄-----------------------------
  
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  
  for(i = 0 ; i < 8 ; i++)
  {
    ch = i + 10;
    if(d & (0x80 >> i))
     {
      digitalWrite (ch, 0);
     }
     else 
     {
      digitalWrite(ch, 1);
     }
  }
  digitalWrite (5, 1);
  delay(2);

   //5번째 줄-----------------------------
  
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  
  for(i = 0 ; i < 8 ; i++)
  {
    ch = i + 10;
    if(e & (0x80 >> i))
     {
      digitalWrite (ch, 0);
     }
     else 
     {
      digitalWrite(ch, 1);
     }
  }
  digitalWrite (6, 1);
  delay(2);

     //6번째 줄-----------------------------
  
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  
  for(i = 0 ; i < 8 ; i++)
  {
    ch = i + 10;
    if(f & (0x80 >> i))
     {
      digitalWrite (ch, 0);
     }
     else 
     {
      digitalWrite(ch, 1);
     }
  }
  digitalWrite (7, 1);
  delay(2);

     //7번째 줄-----------------------------
  
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  
  for(i = 0 ; i < 8 ; i++)
  {
    ch = i + 10;
    if(g & (0x80 >> i))
     {
      digitalWrite (ch, 0);
     }
     else 
     {
      digitalWrite(ch, 1);
     }
  }
  digitalWrite (8, 1);
  delay(2);

  
     //8번째 줄-----------------------------
  
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  
  for(i = 0 ; i < 8 ; i++)
  { 
    ch = i + 10;
    if(h & (0x80 >> i))
     {
      digitalWrite (ch, 0);
     }
     else 
     {
      digitalWrite(ch, 1);
     }
  }
  digitalWrite (9, 1);
  delay(2);
}
