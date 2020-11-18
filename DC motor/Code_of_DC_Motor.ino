
//Motor L298N
const byte BackM1=8;//Right
const byte ForM1=9;
const byte SpeedM1=10;
const byte BackM2=6;//Lift
const byte ForM2=7;
const byte SpeedM2=5;
int Speed = 150;
void setup (){
  //Moteur L298N 
  pinMode(SpeedM1,OUTPUT);
  pinMode(SpeedM2,OUTPUT);
  pinMode(BackM1,OUTPUT);
  pinMode(ForM1,OUTPUT);
  pinMode(BackM2,OUTPUT);
  pinMode(ForM2,OUTPUT);
  
  Serial.begin(9600);
}


void loop(){
//Forward 
analogWrite(SpeedM1,Speed);//Speed
digitalWrite(ForM1,LOW);  
digitalWrite(BackM1,HIGH);

analogWrite(SpeedM2,Speed);
digitalWrite(ForM2,LOW);  
digitalWrite(BackM2,HIGH);
delay(2000);

//Right
analogWrite(SpeedM1,Speed);
digitalWrite(ForM1,HIGH);  
digitalWrite(BackM1,LOW);

analogWrite(SpeedM2,Speed);
digitalWrite(ForM2,LOW);  
digitalWrite(BackM2,HIGH);
delay(2000);

//Lift 

analogWrite(SpeedM1,Speed);
digitalWrite(ForM1,LOW);  
digitalWrite(BackM1,HIGH);

analogWrite(SpeedM2,Speed);
digitalWrite(ForM2,HIGH);  
digitalWrite(BackM2,LOW);
delay(2000);
     
//Backward

analogWrite(SpeedM1,Speed);
digitalWrite(ForM1,HIGH);  
digitalWrite(BackM1,LOW);

analogWrite(SpeedM2,Speed);
digitalWrite(ForM2,HIGH);  
digitalWrite(BackM2,LOW);
delay(2000);

//Stop
digitalWrite(ForM1,LOW);
digitalWrite(BackM1,LOW);
digitalWrite(ForM2,LOW);  
digitalWrite(BackM2,LOW); 
delay(1000);  
}
