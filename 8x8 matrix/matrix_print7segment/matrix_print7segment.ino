//매트릭스 값을 받아서 출력하기
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
  
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);//p 5
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);// p10
}
int flag[4][4] = {0,} ;
int c[4] = {0, };
unsigned long pre, pre2;
int ch = 6;
int toggle = 0;
int pin[8] = {10, 11, 12, 13,15, 16, 17, 18};
int prin[2];
int prin2;
int prin3[2];

int pr[10][8] = {
  {1, 1, 0, 0, 0, 0, 0, 0}, //0 
  {1, 1, 1, 1, 0, 1, 0, 1}, //1
  {0, 1, 0, 1, 0, 0, 1, 0}, //2
  {0, 1, 0, 1, 0, 0, 0, 1}, //3
  {0, 1, 1, 0, 0, 1, 0, 1}, //4
  {0, 1, 0, 0, 1, 0, 0, 1}, //5
  {0, 1, 1, 0, 1, 0, 0, 0}, //6
  {1, 1, 0, 1, 0, 1, 0, 1}, //7
  {0, 1, 0, 0, 0, 0, 0, 0}, //8
  {0, 0, 0, 0, 0, 0, 0, 1}, //9
};


void loop() {
  unsigned long cur=millis();
  if(cur - pre > 10)
  {
    pre = cur;

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
                        prin[0] = i-2; prin[1] = ch - 6;
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
  
//        digitalWrite(14, 1);
//        digitalWrite(19, 1);
//
//        digitalWrite(10,1);
//        digitalWrite(11,1);
//        digitalWrite(12,1);
//        digitalWrite(13,1);
//        digitalWrite(15,1);
//        digitalWrite(16,1);
//        digitalWrite(17,1);
//        digitalWrite(18,1);

        
  

  if(cur-pre2 > 10)
  {
    pre2 = cur;
    prin2 = prin[0] *4 + prin[1] + 1;
    prin3[0] = prin2 / 10;
    prin3[1] = prin2 % 10;
    
    //----------------------------
    if(toggle == 0)
    {
        digitalWrite(14, 0);
        digitalWrite(19, 0);
    
        for(int j = 0 ; j < 8 ; j++)
        {
          digitalWrite(pin[j], pr[ prin3[0] ][j]);
        }
        digitalWrite(14, 1);
        toggle = 1;
    }
    //-----------------------------
    else
    {
        digitalWrite(14, 0);
        digitalWrite(19, 0);
    
        for(int j = 0 ; j < 8 ; j++)
        {
          digitalWrite(pin[j], pr[ prin3[1] ][j]);
        }
        digitalWrite(19, 1);
        toggle = 0;
    }

    
  }
  
  
}
