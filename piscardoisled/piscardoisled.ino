//programaçao piscar dois leds 
void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//  ligar as luzes 
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(1000);
//  apagar as luzes 
  digitalWrite(7,LOW);
  digitalWrite(8,LOW)
  delay(1000);

}
