//모터돌리기1
void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
}

int i, j;
void loop() {

for(j = 0 ; j < 10000 ; j+=100)
{
  for(i = 0 ; i < 10 ; i++)
  {
    digitalWrite(13,1);
    delayMicroseconds(j);
    digitalWrite(13,0);
    delayMicroseconds(10000-j);
  }

  if(j == 10000)
  {
    j = 0;
  }
}
}
