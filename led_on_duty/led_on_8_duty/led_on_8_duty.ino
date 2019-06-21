void setup() {
  
}
unsigned long previousMillis = 0; 
int count, duty;


void loop() {
  unsigned long currentMicros = micros(); 
   
  if(currentMicros = previousMillis > 100)
  {
    previousMillis = currentMicros;
    
    count++;
    if(count == 100)
    {
      digitalWrite(13, 1);
      count = 0;
    }
    
    if(count == duty)
    {
      digitalWrite(13, 0);
    }
      
  }

  if(currentMicros - previousMillis > 20)
  {
    duty++;
    if(duty == 90)
    {
      duty = 10;
    }
  }
}
