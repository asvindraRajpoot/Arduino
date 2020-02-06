
  int time;

void setup() 

{
  // pinMode(7,INPUT);
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  // put your setup code here, to run once:
  time=0;
}

void loop() 
{
  time = millis()/1000;
  if(( time <=20) && (time >=10) )
  {
    digitalWrite(13,HIGH);
  }
  else if(time >=20)
  {
     digitalWrite(13,LOW);
    
  }
    Serial.print("Time:");
    Serial.print(time);
    Serial.print("\n");

  
  // put your main code here, to run repeatedly:

}
