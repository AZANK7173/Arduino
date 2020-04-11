//   Projeto 8 - Acionando um Motor

#include <Servo.h>

Servo meuServo;
int botao = 7;
int pinoLed = 11;

void setup() 
{
  pinMode(botao, INPUT_PULLUP); // define o botão como saidas 
  pinMode(pinoLed, OUTPUT);
}

void loop() 
{
    meuServo.attach(9);
  if(digitalRead(botao) == LOW)
  {
    for(int angulo=0; angulo<=180; angulo++) // Aumenta o angulo do servo ate chegar em 180 graus
    {
      meuServo.write(angulo);
      delay(10);
    }
    for(int angulo=180; angulo>=0; angulo--)// Diminui o angulo do servo
    {
      meuServo.write(angulo);
      delay(10);
    }
  }
  meuServo.detach();


  // S(...) tres pontos
  for (int x = 0; x < 3; x++) // Repete tudo dentro das chaves tres vezes
  {
    digitalWrite(pinoLed, HIGH);    // Acende o LED
    delay(150);                     // Aguarda
    digitalWrite(pinoLed, LOW);     // Desliga o LED
    delay(100);                     // Aguarda novamente
  }

  delay(200);

  // O(---) tres linhas
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(pinoLed, HIGH);
    delay(450);
    digitalWrite(pinoLed, LOW);
    delay(150);
  }

  delay(200);

  //S(...) tres pontos
  for (int x = 0; x < 3; x++)
  {
    digitalWrite(pinoLed, HIGH);
    delay(150);
    digitalWrite(pinoLed, LOW);
    delay(100);
  }

  delay(5000);
  
}
