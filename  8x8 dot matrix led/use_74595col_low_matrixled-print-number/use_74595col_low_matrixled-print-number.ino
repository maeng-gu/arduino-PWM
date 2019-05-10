
void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT); //data
  pinMode(11, OUTPUT); //shift clock
  pinMode(12, OUTPUT); //latch
  //reset 5v -> L이면 초기화
  //output enable gnd -> L일때 값을 output으로 보냄

  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3,  OUTPUT);
  pinMode(4,  OUTPUT);
  pinMode(5,  OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  
  digitalWrite(10, LOW); //data
  digitalWrite(11, LOW); //clock
  digitalWrite(12, LOW); //latch
  ///////////////////////////////////

}

int num = 0;
int data[2] = {0x01, 0x02};
int count = 0;
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
int led[16] = {0, };
int a;
int cheak = 0;

void loop() {
  // put your main code here, to run repeatedly:



for(int k = 0 ; k < 65 ; k++)
{
  for(int j = 0 ; j < 8 ; j++)
  {
    //전체 끄기
      for(int i = 0 ; i < 16 ; i++)
       {
         digitalWrite(10, LOW);
         led[i] = 0;
         
         digitalWrite(11, HIGH); //clock
         digitalWrite(11, LOW); //clock
        }
         
           //latch high, low
            digitalWrite(12, HIGH);
             digitalWrite(12, LOW);

///////////////////
        for(int i = 0 ; i < 8 ; i++)
       {
         digitalWrite(10, LOW);
                  
         digitalWrite(11, HIGH); //clock
         digitalWrite(11, LOW); //clock
        }
        
        for(i = 0 ; i < 8 ; i++)
         {          
              if (binary[number][7-j] & (0x01 << i))
             {
                 digitalWrite(10, LOW);
                 led[i+8] = 0;
              }
             else
               {
                   digitalWrite(10, HIGH);
                   led[i+8] = 1;
                 }

              digitalWrite(11, HIGH); //clock
              digitalWrite(11, LOW); //clock
          }
 
           //latch high, low
            digitalWrite(12, HIGH);
             digitalWrite(12, LOW);

             led[j] = 1;

             for(i = 0 ; i < 16 ; i++)
             {
                digitalWrite(10, led[i]);

              digitalWrite(11, HIGH); //clock
              digitalWrite(11, LOW); //clock
             }

                        //latch high, low
            digitalWrite(12, HIGH);
             digitalWrite(12, LOW);

             

         //  digitalWrite (j+2, 1);          
         delay(1);
          cheak++;
     if(cheak >8)
     {
      cheak = 0;
     }
     }
    

}

number++;
if(number > 9)
{
  number = 0;
}

}
