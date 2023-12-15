int ledPin = 13; 
int inputPin = 8; 
int touch = LOW; //Common code for all sensors - var touch is like switch
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
      	touch = HIGH; 
    }
  	else 
    {
     	digitalWrite(ledPin, LOW); 
      	touch = LOW; 
    }
}