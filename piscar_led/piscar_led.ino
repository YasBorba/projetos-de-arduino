//// programa que envia sinal alto para saida 7 , aguarda 1 segundo e envia sinal baixo para saida 7 
void setup() {
  // porta configurada como saida 
  pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7,HIGH);//luz acessa 
  delay(1000);//tempo da luz acessa 
  digitalWrite(7,LOW);//luz apagada 
  delay(1000);//tempo da luz apagada

}
