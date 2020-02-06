#include <Servo.h>

Servo servo;
int angle = 0;

void setup() {
  servo.attach(5);
  servo.write(angle);
}


void loop() 
{ 
 // scan from 0 to 180 degrees
  //for(angle = 10; angle < 180; angle++)  
  //{                                  
    servo.write(angle); 
    angle=angle+30;            
    delay(10);                   
 // } 
  // now scan back from 180 to 0 degrees
 // for(angle = 180; angle > 10; angle--)    
 // {                                
  //  servo.write(angle);           
  //  delay(15);       
 // } 
} 
