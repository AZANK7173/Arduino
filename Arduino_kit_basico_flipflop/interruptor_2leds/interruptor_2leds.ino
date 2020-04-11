//   Projeto 5 - Interruptor de luz

int botao = 6;
int led1 = 11;
int led2 = 10;
bool estadoLed = 0;

void setup()
{
  pinMode(botao, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  if (digitalRead(botao) == LOW) // Se o botão for pressionado
  {
    estadoLed = !estadoLed; // troca o estado do LED
    digitalWrite(led1, estadoLed);
    digitalWrite(led2, estadoLed);
    while (digitalRead(botao) == LOW);
    delay(100);
  }
}
