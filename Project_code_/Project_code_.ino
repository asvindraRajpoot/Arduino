  

/*   Speed of Motors */ 
#define Pwm_Speed_Max  255

#define Pwm_Speed_Min  0
/* Setting the pin no     */

int Motor1_ENJ1 = 2;
int Motor2_ENJ2 = 4;
int Motor3_ENJ1 = 7;
int Motor4_ENJ2 = 8;
int Motor1_J1_ConrtrolA = A0;
int Motor1_J1_ConrtrolB=  A1;
int Motor2_J2_ConrtrolA = A2;
int Motor2_J2_ConrtrolB = A3;
int Motor3_J1_ConrtrolA = 5;
int Motor3_J1_ConrtrolB = 6;
int Motor4_J2_ConrtrolA = 9;
int Motor4_J2_ConrtrolB = 10; 
int UR_Left_Trig = 12;
int UR_Left_Echo = 13;
int UR_Right_Trig = 3;
int UR_Right_Echo = 11;
int UR_Front_Trig = A4;
int UR_Front_Echo = A5;
//int inputVal = 0;






/*    defining the functions     */
int Move_Forward()    // Move Forward the Robot
{ int countSec=0;
 /* analogWrite(A0,255);
  analogWrite(A1,0);*/
   
   analogWrite(Motor1_J1_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor1_J1_ConrtrolB,Pwm_Speed_Max);
   analogWrite(Motor2_J2_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor2_J2_ConrtrolB,Pwm_Speed_Max);
   
   analogWrite(Motor3_J1_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor3_J1_ConrtrolB,Pwm_Speed_Max);
   analogWrite(Motor4_J2_ConrtrolA,Pwm_Speed_Max);
   analogWrite(Motor4_J2_ConrtrolB,Pwm_Speed_Min);
   //Serial.println(" moving forwared");
   //countSec++;
   //Serial.println(countSec);
  
}
int Move_Backward()
{
  int countSec=0;
   analogWrite(Motor1_J1_ConrtrolA,Pwm_Speed_Max);
   analogWrite(Motor1_J1_ConrtrolB,Pwm_Speed_Min);
   analogWrite(Motor2_J2_ConrtrolA,Pwm_Speed_Max);
   analogWrite(Motor2_J2_ConrtrolB,Pwm_Speed_Min);
   
   analogWrite(Motor3_J1_ConrtrolA,Pwm_Speed_Max);
   analogWrite(Motor3_J1_ConrtrolB,Pwm_Speed_Min);
   analogWrite(Motor4_J2_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor4_J2_ConrtrolB,Pwm_Speed_Max);

 /* Serial.println(" moving forwared");
  countSec++;
  Serial.println(countSec);*/




  
}
void Turn_Right()
{

   analogWrite(Motor1_J1_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor1_J1_ConrtrolB,Pwm_Speed_Min);
   analogWrite(Motor2_J2_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor2_J2_ConrtrolB,Pwm_Speed_Max);
   
  
   analogWrite(Motor3_J1_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor3_J1_ConrtrolB,Pwm_Speed_Max);
   analogWrite(Motor4_J2_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor4_J2_ConrtrolB,Pwm_Speed_Min);


  
}
void Take_U_Turn()
{ 
  analogWrite(Motor1_J1_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor1_J1_ConrtrolB,Pwm_Speed_Min);
   analogWrite(Motor2_J2_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor2_J2_ConrtrolB,Pwm_Speed_Max);
   
  
   analogWrite(Motor3_J1_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor3_J1_ConrtrolB,Pwm_Speed_Max);
   analogWrite(Motor4_J2_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor4_J2_ConrtrolB,Pwm_Speed_Min);





  
}
void Turn_Left()
{
   analogWrite(Motor1_J1_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor1_J1_ConrtrolB,Pwm_Speed_Max);
   analogWrite(Motor2_J2_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor2_J2_ConrtrolB,Pwm_Speed_Min);
    analogWrite(Motor3_J1_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor3_J1_ConrtrolB,Pwm_Speed_Min);
   analogWrite(Motor4_J2_ConrtrolA,Pwm_Speed_Max);
   analogWrite(Motor4_J2_ConrtrolB,Pwm_Speed_Min);









  
}
void Brake()
{


   analogWrite(Motor1_J1_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor1_J1_ConrtrolB,Pwm_Speed_Min);
   analogWrite(Motor2_J2_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor2_J2_ConrtrolB,Pwm_Speed_Min);
   
   analogWrite(Motor3_J1_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor3_J1_ConrtrolB,Pwm_Speed_Min);
   analogWrite(Motor4_J2_ConrtrolA,Pwm_Speed_Min);
   analogWrite(Motor4_J2_ConrtrolB,Pwm_Speed_Min);


  
}



void setup() 
{
  Serial.begin(9600);
  /*pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);*/
   /*  It tells the mcu these pins are going to be as out pin    */
  pinMode(Motor1_ENJ1,OUTPUT); 
  pinMode(Motor2_ENJ2,OUTPUT);
  pinMode(Motor3_ENJ1,OUTPUT);
  pinMode(Motor4_ENJ2,OUTPUT);
  pinMode(46,OUTPUT);
  pinMode(47,OUTPUT);


   /*  It tells the mcu these pins are going to be as out pin    */
  pinMode(Motor1_J1_ConrtrolA,OUTPUT);
  pinMode(Motor1_J1_ConrtrolB,OUTPUT);
  pinMode(Motor2_J2_ConrtrolA,OUTPUT);
  pinMode(Motor2_J2_ConrtrolB,OUTPUT);
  pinMode(Motor3_J1_ConrtrolA,OUTPUT);
  pinMode(Motor3_J1_ConrtrolB,OUTPUT);
  pinMode(Motor4_J2_ConrtrolA,OUTPUT);
  pinMode(Motor4_J2_ConrtrolB,OUTPUT); 


/* Making the enables pin as High  */

  digitalWrite(Motor1_ENJ1,HIGH); 
  digitalWrite(Motor2_ENJ2,HIGH);
  digitalWrite(Motor3_ENJ1,HIGH);
  digitalWrite(Motor4_ENJ2,HIGH);
  



/*  To set up Pins for Sensors                              */

pinMode(UR_Left_Trig,OUTPUT);
pinMode(UR_Right_Trig,OUTPUT);
pinMode(UR_Left_Echo,INPUT);
pinMode(UR_Right_Echo,INPUT);
pinMode(UR_Front_Trig,OUTPUT);
pinMode(UR_Front_Echo,INPUT);


  
}



 int Right_Sensor()
 {
  long duration_Right, inches_Right, cm_Right;

   
  digitalWrite(UR_Right_Trig,LOW);
  delayMicroseconds(2);
  digitalWrite(UR_Right_Trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(UR_Right_Trig,LOW);


  duration_Right = pulseIn(UR_Right_Echo, HIGH);

  cm_Right    =  duration_Right / 29 / 2;

return cm_Right;



 }
 int Left_Sensor()
 {
    
    long duration_Left, inches_Left, cm_Left;

   
  digitalWrite(UR_Left_Trig,LOW);
  delayMicroseconds(2);
  digitalWrite(UR_Left_Trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(UR_Left_Trig,LOW);


  duration_Left = pulseIn(UR_Left_Echo, HIGH);

  cm_Left    =  duration_Left / 29 / 2;

return cm_Left;

 }



int Front_Sensor()
{
   long duration_Front, inches_Front, cm_Front;

   
  digitalWrite(UR_Front_Trig,LOW);
  delayMicroseconds(2);
  digitalWrite(UR_Front_Trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(UR_Front_Trig,LOW);


  duration_Front = pulseIn(UR_Front_Echo, HIGH);


 inches_Front = duration_Front / 74 / 2;
 cm_Front    =  duration_Front / 29 / 2;
  return cm_Front;



}


void loop()

{


}




}


  
