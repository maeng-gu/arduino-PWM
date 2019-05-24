//function함수로 묶어서 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //ROW
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);

  //COL
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

int getrow;
unsigned long per;


void loop() {
  unsigned long cur=millis();
  if(cur - per > 10)
  {
    per = cur;

    digitalWrite(6, 0);

    getrow = digitalRead(2);
    
    if(getrow == 1)
    {
      Serial.println("HIGH");
    }
    else
    {
      Serial.println("LOW");
    }
    
  
  }
      
  
}
