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

void loop() {

  for(int k = 0 ; k < 65 ; k++)
  {
  for(int j = 0 ; j < 8 ; j++)
  {
      for(int j = 2 ; j < 10 ; j++)
       {
         digitalWrite(j, 0);
        }
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
         digitalWrite (j+2, 1);
         delay(2);
         
     }

  }

     number++;
     if(number == 10)
     {
      number = 0;
     }
}
