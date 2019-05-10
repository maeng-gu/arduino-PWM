void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT); //data
  pinMode(11, OUTPUT); //shift clock
  pinMode(12, OUTPUT); //latch
  //reset 5v -> L이면 초기화
  //output enable gnd -> L일때 값을 output으로 보냄

  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3,  OUTPUT);
  pinMode(4,  OUTPUT);
  pinMode(5,  OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  digitalWrite(10, LOW); //data
  digitalWrite(11, LOW); //clock
  digitalWrite(12, LOW); //latch

}

int num = 0;
int data[2] = {0x01, 0x02};
int count = 0;

int ch, i;


void loop() {
  // put your main code here, to run repeatedly:


  ///////////////////////////////////
    for(int j = 0 ; j < 8 ; j++)
    {
    
        for(int i = 2 ; i < 10 ; i++)
         {
           digitalWrite(10, HIGH);
         
           digitalWrite(11, HIGH); //clock
           digitalWrite(11, LOW); //clock
          }
        
         for(i = 0 ; i < 8 ; i++)
         {
               digitalWrite(10, LOW);

               digitalWrite(11, HIGH); //clock
               digitalWrite(11, LOW); //clock
           }
 
            //latch high, low
               digitalWrite(12, HIGH);
               digitalWrite(12, LOW);
             
           delay(2);
         
     }
}
