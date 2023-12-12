//Chase Effect 
//10 LEDs required 
byte ledPin[10] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13}; 
int ledDelay = 65; //time for which each independent LED is glowing
int direction = 1; 
int currentLED = 0; //flow of path , directly proportional to direction
unsigned long changeTime; //long as measured in milliseconds 
void setup() 
{
	for(int x = 0; x < 10; x++) //Indexing approach rather than value approach 
    {
    	pinMode(ledPin[x], OUTPUT);  
    }
  changeTime = millis(); 
}
void loop() 
{
  if((millis()-changeTime)>ledDelay) 
  {
    changeLED();
    changeTime = millis();
  }
}
void changeLED() 
{
  for(int x=0; x<10; x++)
  {
   	digitalWrite(ledPin[x], LOW); 
  }
  digitalWrite(ledPin[currentLED], HIGH); 
  currentLED += direction; //Current changing with respect to positive direction -->+
  if(currentLED == 9)
  {
    direction = -1; //last LED then direction is negative  
  }
  if(currentLED == 0) 
  {
    direction = 1; //first LED then direction is positive 
  }
}
