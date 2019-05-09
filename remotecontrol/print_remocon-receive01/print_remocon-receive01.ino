//01 입력 출력하기
//자료 : 
//10:20:19.885 -> 18:1140 0
//10:20:19.885 -> 19:1144 0 
//10:20:19.885 -> 20:1144 0
//10:20:19.885 -> 21:2252 1
//10:20:19.918 -> 22:2256 1
//10:20:19.918 -> 23:1140 0
//10:20:19.918 -> 24:1140 0 
//10:20:19.952 -> 25:1144 0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(1, remocon_ISR, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

int count;
unsigned long remocon_micro;
unsigned long remocon_time_array[50];
unsigned int offset_value[50];

void remocon_ISR()
{
  remocon_micro = micros();
  remocon_time_array[count] = remocon_micro;

  if(count > 0)
  {
    offset_value[count] = remocon_time_array[count] - remocon_time_array[count - 1];
  }
  
  count++;
  if(count > 33)
  {
    count = 0;
    for(int j = 18; j < 26 ; j++)
    {
//      Serial.print (String(j) + ":");
//      Serial.println (offset_value[j]);
        if(offset_value[j] > 1000 && offset_value[j] < 1500)
        {
          Serial.print ("0");
        }
        else if(offset_value[j] > 2000 && offset_value[j] < 2500)
        {
          Serial.print("1");
        }
        
    }
    Serial.println();
  }
}
