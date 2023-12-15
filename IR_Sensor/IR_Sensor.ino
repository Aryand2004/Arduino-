int ledPin = 9; 
int inputPin = 2;
int object = LOW; 
int stat = 0; 

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop() 
{
  stat = digitalRead(inputPin);
  if(stat == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    object = HIGH; 
  }
  else 
  {
    digitalWrite(ledPin, LOW);
    object = LOW; 
  }
}
