void setup() {
  pinMode(13, OUTPUT);
}


unsigned long previousMicors = 0; 
unsigned long previousMillis = 0; 
int count = 0;
int flag = 0;
int duty = 0;

void loop() {
  unsigned long currentMicros = micros(); 
  unsigned long currentMillis = millis(); 

  if(currentMillis - previousMillis > 10)
  {
      previousMillis = currentMillis;
      digitalWrite(13, 1);
      flag = 1;
      previousMicors = currentMicros = micros();
      
  }

  if(flag == 1)
  {
     if(currentMicros - previousMicors > duty)
     {
        previousMicors = currentMillis;
        digitalWrite(13, 0);
        flag = 0;
     }
  }

  if(currentMillis - previousMillis > 20)
  {
    duty++;
    if(duty == 1000)
    {
      duty = 0;
    }
  }
  

}
