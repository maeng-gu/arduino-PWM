
void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT); //data
  pinMode(11, OUTPUT); //shift clock
  pinMode(12, OUTPUT); //latch
  //reset 5v -> L이면 초기화
  //output enable gnd -> L일때 값을 output으로 보냄


}

int num = 0;
int data[2] = {0x01, 0x02};
int count = 0;

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(10, LOW); //data
  digitalWrite(11, LOW); //clock
  digitalWrite(12, LOW); //latch
  ///////////////////////////////////

  ////LED ON
  for (int i = 0 ; i < 8 ; i++)
  {
    if (data[count] & (0x80 >> i))
    {
      digitalWrite(10, HIGH);
    }
    else
    {
      digitalWrite(10, LOW);
    }

    digitalWrite(11, HIGH); //clock
    digitalWrite(11, LOW); //clock
  }

  //latch high, low

  digitalWrite(12, HIGH);
  digitalWrite(12, LOW);

  delay(1000);

  count++;
  if (count > 1)
  {
    count = 0;
  }


}
