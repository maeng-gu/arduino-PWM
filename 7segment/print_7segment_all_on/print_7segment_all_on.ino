//4개 다 키기
void setup() {
   // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
}
int j, i;
int dig[10][7] = {
  {1, 1, 1, 0, 1, 1, 1}, //0
  {0, 0, 1, 0, 1, 0, 0}, //1
  {1, 1, 0, 1, 1, 0, 1}, //2
  {0, 1, 1, 1, 1, 0, 1}, //3
  {0, 0, 1, 1, 1, 1, 0}, //4
  {0, 1, 1, 1, 0, 1, 1}, //5
  {1, 1, 1, 1, 0, 1, 0}, //6
  {0, 0, 1, 0, 1, 0, 1}, //7
  {1, 1, 1, 1, 1, 1, 1}, //8
  {0, 0, 1, 1, 1, 1, 1}, //9
};

void loop() {
digitalWrite(11, 1);
digitalWrite(12, 1);
digitalWrite(13, 1);
digitalWrite(14, 1);

digitalWrite(11, 0);
  for(i = 0 ; i <7 ; i++)
  {
    digitalWrite(i + 4, dig[1][i]);
  }
  delay(2);

//------------------
digitalWrite(11, 1);
digitalWrite(12, 1);
digitalWrite(13, 1);
digitalWrite(14, 1);

digitalWrite(12, 0);
  for(i = 0 ; i <7 ; i++)
  {
    digitalWrite(i + 4, dig[2][i]);
  }
  delay(2);
//--------------
  digitalWrite(11, 1);
digitalWrite(12, 1);
digitalWrite(13, 1);
digitalWrite(14, 1);

digitalWrite(13, 0);
  for(i = 0 ; i <7 ; i++)
  {
    digitalWrite(i + 4, dig[3][i]);
  }
  delay(2);

  //--------------
  digitalWrite(11, 1);
digitalWrite(12, 1);
digitalWrite(13, 1);
digitalWrite(14, 1);

digitalWrite(14, 0);
  for(i = 0 ; i <7 ; i++)
  {
    digitalWrite(i + 4, dig[4][i]);
  }
  delay(2);
}
