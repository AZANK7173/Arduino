// Projeto 13 - Alarme de movimento

int pinoTilt = 7;
int pinoBuzzer = 6;

void setup()
{
  pinMode(pinoTilt, INPUT);
}

void loop()
{
  if(digitalRead(pinoTilt) == HIGH)
  {
    tone(pinoBuzzer, 440);
    delay(1000);       
  } 
  else
  {
    noTone(pinoBuzzer);   
  }
}
