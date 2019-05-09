//For문으로 첫번째 받기
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
int a = 0;
int flag[4] = {0,0,0,0};
int ch = 6;

void loop() {
  for(int i = 6 ; i < 10 ; i++)
  {
    digitalWrite(i, 0);
  }
  if(ch == 10) ch = 6;
  digitalWrite(ch, 1);
  
   a=digitalRead(2);
  
  if(a==1) 
  {
    if (flag[ch-6] == 0)
    {
      Serial.println("HIGH " + String(ch-6));
      flag[ch-6] = 1;
    }
  }
  else
  {
    if(flag[ch-6] == 1)
    {
    Serial.println("LOW " + String(ch-6));
    flag[ch-6] = 0;
    }
  }
  ch++;
   delay (10);
}
For문으로 첫번째 받기
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
int a = 0;
int flag[4] = {0,0,0,0};
int ch = 6;

void loop() {
  for(int i = 6 ; i < 10 ; i++)
  {
    digitalWrite(i, 0);
  }
  if(ch == 10) ch = 6;
  digitalWrite(ch, 1);
  
   a=digitalRead(2);
  
  if(a==1) 
  {
    if (flag[ch-6] == 0)
    {
      Serial.println("HIGH " + String(ch-6));
      flag[ch-6] = 1;
    }
  }
  else
  {
    if(flag[ch-6] == 1)
    {
    Serial.println("LOW " + String(ch-6));
    flag[ch-6] = 0;
    }
  }
  ch++;
   delay (10);
}
