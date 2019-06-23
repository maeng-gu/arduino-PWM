void setup() {

  pinMode(13, OUTPUT);
  
}
unsigned long previousMicors = 0; 
unsigned long previousMillis = 0; 
unsigned long previousMicors1 = 0; 
unsigned long previousMillis1 = 0; 
int count = 0;
int count1 = 0;
int duty = 0;
int duty_servo = 0;


void loop() {
  unsigned long currentMicros = micros(); 
  unsigned long currentMillis = millis(); 

   
  if(currentMicros - previousMicors > 100)
  {
    previousMicors = currentMicros;
    
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

  if(currentMillis - previousMillis > 20)
  {
    previousMillis = currentMillis;
    
    duty++;
    if(duty == 90)
    {
      duty = 10;
    }
  }
  /////--------------------

  if(currentMicros - previousMicors1)
  {
    previousMicors1 = currentMicros;
    count1++;
    if(count1 == 625)
    {
      count1 = 0;
      digitalWrite(3, 1);
    }
    
    if(count1 == duty_servo)
    {
      digitalWrite(3, 0);
    }

    if(currentMillis - previousMillis1 > 20)
    {
      previousMillis1 = currentMillis;
      duty_servo++;
      if(duty_servo == 72)
      {
        duty_servo = 22;
      }
    }
  }
}
