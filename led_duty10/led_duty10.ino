void setup() {
  pinMode(13, OUTPUT);
}


unsigned long previousMicors = 0; 
unsigned long previousMillis = 0; 
int count = 0;
int flag = 0;

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
     if(currentMicros - previousMicors > 1000)
     {
        previousMicors = currentMillis;
        digitalWrite(13, 0);
        flag = 0;
     }
  }
  

}
