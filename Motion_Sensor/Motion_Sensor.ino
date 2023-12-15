int ledPin = 13; 
int inputPin = 2; 
int motion = LOW; 
int stat = 0; 

void setup() 
{
	pinMode(ledPin, OUTPUT); //pinMode as digital pins 
	pinMode(inputPin, INPUT); 
}
//if motion detected by input pin then motion = high, and signal sent to LEDPIN 
void loop() 
{
	stat = digitalRead(inputPin);
if(stat == HIGH) 
{
	digitalWrite(ledPin, HIGH); 
	motion = HIGH; 
}
else 
{
	digitalWrite(ledPin, LOW); 
	motion = LOW; 
}
}