//L293D
//Motor A
const int motor1Pin1  = 5;  // Pin 14 of L293
const int motor1Pin2  = 6;
const int motor1Pin3  = A0;// Pin 10 of L293
////Motor B
const int motor2Pin1  = 12;  // Pin 14 of L293
const int motor2Pin2  = 13;
const int motor2Pin3  = A1;// Pin 10 of L293
////Motor B

//This will run only one time.
void setup()
{
 
    //Set pins as outputs
    pinMode(motor1Pin1, OUTPUT);
    pinMode(motor1Pin2, OUTPUT);
    pinMode(motor1Pin3, OUTPUT);
   // digitalWrite(motor1Pin3,HIGH);
    analogWrite(motor1Pin3, 130);      //sets the motors speed
         //sets the motors speed
   // digitalWrite(motorPin2,255);
   pinMode(motor2Pin1, OUTPUT);
    pinMode(motor2Pin2, OUTPUT);
    pinMode(motor2Pin3, OUTPUT);
   // digitalWrite(motor2Pin3,HIGH);
    analogWrite(motor2Pin3, 130); 
    //This code  will turn Motor A clockwise for 2 sec.
   
  
}

void forward()
{
 digitalWrite(motor1Pin1, HIGH);
 digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
 digitalWrite(motor2Pin2, LOW);
 delay(1000);
}
void loop()
{
    
forward();
     
 
    
//    digitalWrite(motorPin1, LOW);
//    digitalWrite(motorPin2, HIGH);
//    delay(200);
// 
}
//    delay(100); 
//    digitalWrite(motorPin1, HIGH);
//    digitalWrite(motorPin2, LOW);
//
//    //This code will turn Motor A counter-clockwise for 2 sec.
 
//    digitalWrite(motorPin1, LOW);
//    digitalWrite(motorPin2, LOW);
//    
