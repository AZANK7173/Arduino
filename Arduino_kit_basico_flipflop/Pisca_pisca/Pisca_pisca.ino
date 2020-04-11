// Programa: Pisca Pisca com Arduino UNO R3

void setup() {
  // put your setup code here, to run once:
  // Define o pino 11 do Arduino será usado como saída
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Acende o LED
  digitalWrite(11,HIGH);

  //Aguarda 0,1 segundo
  delay(100);

  //Apaga o LED
  digitalWrite(11,LOW);

  //Aguarda um décimo de segundo novamente
  delay(100);

}
