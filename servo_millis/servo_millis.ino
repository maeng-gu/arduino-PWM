void setup() {
  pinMode(3, OUTPUT);
  
}
unsigned long previousMicors = 0; 
unsigned long previousMillis = 0; 

int count = 0;
int duty = 0;
int duty_servo = 0;


void loop() {
  unsigned long currentMicros = micros(); 
  unsigned long currentMillis = millis(); 

  if(currentMicros - previousMicors)
  {
    previousMicors = currentMicros;
    count++;
    if(count == 625)
    {
      count = 0;
      digitalWrite(3, 1);
    }
    
    if(count == duty_servo)
    {
      digitalWrite(3, 0);
    }

    
    
  }
  if(currentMillis - previousMillis > 20)
    {
      previousMillis = currentMillis;
      duty_servo++;
      if(duty_servo == 72)
      {
        duty_servo = 22;
      }
    }
}
