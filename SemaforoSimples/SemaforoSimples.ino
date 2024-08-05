// C++ code
// semaforo completo 

#define ledvm 13
#define ledam 12
#define ledvd 11
#define ledvm2 4
#define ledvd2 2 
void setup()
{
  pinMode(13, OUTPUT);//led vermelho
  pinMode(12, OUTPUT);//led amarelo 
  pinMode(11, OUTPUT);//led verde
  pinMode(4, OUTPUT);//led vermelho
  pinMode(2, OUTPUT);//led verde
}

void loop()
{
  int t1 = 4000;
  int t2 = 500;
  digitalWrite(ledvd, HIGH);//verde carro 
  digitalWrite(ledvm2,HIGH); //vermelho pedestre 
  delay(t1);// temporizador 
  digitalWrite(ledvd, LOW);// verde carro
  digitalWrite(ledam, HIGH);//amarelo carro
  delay(t1);
  digitalWrite(ledam, LOW);//amarelo carro 
  digitalWrite(ledvm, HIGH);//vermelho carro 
  digitalWrite(ledvm2,LOW); //vermelho pedestre
  digitalWrite(ledvd2, HIGH);//verde pedestre 
  delay(t2);
  digitalWrite(ledvd2, LOW);//verde pedestre 
  delay(t2);
  digitalWrite(ledvd2, HIGH);//verde pedestre 
  delay(t2);
  digitalWrite(ledvd2, LOW);//verde pedestre 
  delay(t2);
  digitalWrite(ledvd2, HIGH);//verde pedestre 
  delay(t2);
  digitalWrite(ledvd2, LOW);//verde pedestre 
  digitalWrite(ledvm2,HIGH); //vermelho pedestre 
  delay(t2);
  digitalWrite(ledvm, LOW);
  
}
