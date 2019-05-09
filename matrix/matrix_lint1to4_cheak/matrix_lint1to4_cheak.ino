//1~4 다
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
int a = 0, b = 0, c = 0, d = 0;
int flag[4][4] = {0,} ;
int ch = 6;


void loop() {
  for (int i = 6 ; i < 10 ; i++)
  {
    digitalWrite(i, 0);
  }
  digitalWrite(ch, 1);
  //---------------------------

  a = digitalRead(2);

  if (a == 1)
  {
    if (flag[0][ch-6] == 0)
    {
      Serial.println("HIGH 1 " + String(ch - 6));
      flag[0][ch - 6] = 1;
    }
  }
  else
  {
    if (flag[0][ch-6] == 1)
    {
      Serial.println("LOW 1 " + String(ch - 6));
      flag[0][ch - 6] = 0;
    }
  }

//  //-------------------------
  b = digitalRead(3);

  if (b == 1)
  {
   if (flag[1][ch-6] == 0)
    {
      Serial.println("HIGH 2 " + String(ch - 6));
      flag[1][ch - 6] = 1;
    }
  }
  else
  {
    if (flag[1][ch-6] == 1)
    {
      Serial.println("LOW 2 " + String(ch - 6));
      flag[1][ch - 6] = 0;
   }
  }

  //-------------------------------

  c = digitalRead(4);

  if (c == 1)
  {
   if (flag[2][ch-6] == 0)
    {
      Serial.println("HIGH 3 " + String(ch - 6));
      flag[2][ch - 6] = 1;
    }
  }
  else
  {
    if (flag[2][ch-6] == 1)
    {
      Serial.println("LOW 3 " + String(ch - 6));
      flag[2][ch - 6] = 0;
   }
  }

  //-------------------------------

    d = digitalRead(5);

  if (d == 1)
  {
   if (flag[3][ch-6] == 0)
    {
      Serial.println("HIGH 4 " + String(ch - 6));
      flag[3][ch - 6] = 1;
    }
  }
  else
  {
    if (flag[3][ch-6] == 1)
    {
      Serial.println("LOW 4 " + String(ch - 6));
      flag[3][ch - 6] = 0;
   }
  }

  //-------------------------------
  ch++;
  if(ch ==10)
    ch = 6;
    
  delay (10);
}
