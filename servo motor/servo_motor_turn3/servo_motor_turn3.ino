//모터돌리기
void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
}

int i = 0, j, a = 0;
int count = 0;

void loop() {

  count ++;
  
  if(count == 625) //한 주기
  
  {
     digitalWrite(9,1);
     count = 0;
   }

   if(count == i)
   {
       digitalWrite(9,0);
       i++;
   }

  }
