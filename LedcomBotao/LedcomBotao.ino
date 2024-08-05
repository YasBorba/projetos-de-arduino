//led que acende com um botao 
void setup() {
 pinMode(7, OUTPUT); //led
 pinMode(9, INPUT); //botao
}
void loop() {
//  declarando variaveis 
  valor = digitalRead(9);
  if(valor == HIGH && anterior == LOW){
    estadoBotao =! estadoBotao;
  }
  digitalWrite(7,estadoBotao);
  anterior = valor;
  delay(50);
}
