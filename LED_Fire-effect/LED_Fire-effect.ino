int ledPin1 = 9;
int ledPin2 = 10; 
int ledPin3 = 11; 
void setup()
{
  pinMode(ledPin1, OUTPUT); //Using PinMode as not completely using Analog Values 
  pinMode(ledPin2, OUTPUT); //pinMode used due to '+135'
  pinMode(ledPin3, OUTPUT); 
}

void loop()
{
	analogWrite(ledPin1,random(120)+135); //Default '+135' prevent very low/unvisible brightness
	analogWrite(ledPin2,random(120)+135); 
  analogWrite(ledPin3,random(120)+135); 
  delay(random(100)); //Variation of Delay - Cause an imagination effect - works only with real boards (not simulation)
}