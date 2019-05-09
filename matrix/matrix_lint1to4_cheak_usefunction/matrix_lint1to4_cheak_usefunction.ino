//function함수로 묶어서 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);

  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
int flag[4][4] = {0,} ;
int c[4] = {0, };
unsigned long per;
int ch = 6;

void loop() {
  unsigned long cur=millis();
  if(cur - per > 10)
  {
    per = cur;

       //for(int ch = 6 ; ch < 10 ; ch++)
       {
              
              for (int i = 2 ; i < 6 ; i++)
               {
                    digitalWrite(6, 0);
                    digitalWrite(7, 0);
                    digitalWrite(8, 0);
                    digitalWrite(9, 0);
                    digitalWrite(ch, 1);
                    c[i-2] = digitalRead(i);
                    
                   if (c[i-2] == 1)
                    {
                        if (flag[i-2][ch-6] == 0)
                      {
                        Serial.println("HIGH "  + String(i-2)+ String(ch - 6));
                        flag[i-2][ch - 6] = 1;
                      }
                    }
                    else
                    {
                      if (flag[i-2][ch-6] == 1)
                      {
                        Serial.println("LOW " +String(i-2)+ String(ch - 6));
                        flag[i-2][ch - 6] = 0;
                      }
                    }
    
                }                 

       }
       ch++;
       if(ch ==10)
        ch = 6;
  }
  
}
