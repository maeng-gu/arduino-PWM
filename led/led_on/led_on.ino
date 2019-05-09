//Led 켜기
void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delayMicroseconds(8000); //8m/s
  digitalWrite (13, LOW);  
  delayMicroseconds(2000);
}
