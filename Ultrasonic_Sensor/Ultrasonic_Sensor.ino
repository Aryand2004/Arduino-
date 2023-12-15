#define trigPin 13 
#define echoPin 12 
#define ledPin 11 
//Ultrasonic Sensor AKA Proximity Sensor 
void setup()
{
  Serial.begin(9600); 
  pinMode(trigPin, OUTPUT); //OUTPUT for the arduino and input for the Ultrasonic sensor
  pinMode(echoPin, OUTPUT); 
  pinMode(ledPin, OUTPUT); 
}
void loop() 
{
	long duration, distance; 
  	digitalWrite(trigPin, LOW); 
  	delayMicroseconds(2); 
  	digitalWrite(trigPin, HIGH); 
  	delayMicroseconds(10); 
   	//^ producing the "chirp"  
  	duration = pulseIn(echoPin, HIGH); 
  	
  	distance = (duration/2) / 29.1; //Distance calc for Ultrasonic sensor 
  	
 	if (distance < 10) //10 centimeters
    {
     	digitalWrite(ledPin, HIGH);  
    }
  	else 
    {
     	digitalWrite(ledPin, LOW); 
    }
	Serial.print(distance); 
  	Serial.println("cm");
  	delay(1500); 
}