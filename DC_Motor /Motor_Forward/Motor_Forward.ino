#include <AFMotor.h> 

AF_DCMotor motor1(3); 

void setup() 
{
  motor1.setSpeed(255); 
}
void loop() 
{
  motor1.run(FORWARD); 
  //Capacitor - less current given to motor - motor won't get harmed 
  delay(2000);
  motor1.run(BACKWARD); 
  delay(3000); 
  motor1.run(FORWARD); 
  delay(2000):
} 
//NOTE: If power Arduino with 12 Volt Adaptor Motor Speed > than powering with PC 