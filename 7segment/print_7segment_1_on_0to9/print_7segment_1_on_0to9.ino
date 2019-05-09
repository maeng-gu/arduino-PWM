
//7세그먼트 0~9까지 하나하나 켜기(배열포함)
void setup() {
   // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
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

for(j = 0 ; j < 10 ; j++)
{
  for(i = 0 ; i <7 ; i++)
  {
    digitalWrite(i + 4, dig[j][i]);
  }
  delay(1000);
}


}
