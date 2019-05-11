
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
int led[16] = {0, };

void loop() {
for(int timer = 0 ; timer < 65 ; timer++) //1s
{
  
  for(int j = 0 ; j < 8 ; j++) //matrix line
  {
    
    //all led off
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

       //matrix row all low
       for(int i = 0 ; i < 8 ; i++)
       {
         digitalWrite(10, LOW);
                  
         digitalWrite(11, HIGH); //clock
         digitalWrite(11, LOW); //clock
        }

        //matrix col number_8bit
        for(int i = 0 ; i < 8 ; i++)
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

            //matrix on_line number
             led[j] = 1;

           //matrix on 
             for(int i = 0 ; i < 16 ; i++)
             {
                digitalWrite(10, led[i]);

              digitalWrite(11, HIGH); //clock
              digitalWrite(11, LOW); //clock
             }

            //latch high, low
            digitalWrite(12, HIGH);
            digitalWrite(12, LOW);

            delay(1);
     }
    

}

//count number
number++;
if(number > 9)
{
  number = 0;
}

}
