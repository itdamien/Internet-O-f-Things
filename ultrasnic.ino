#include <Servo.h>//servo motor library

#define trigping 2 //arduino port connected to trigger pin of ultrasonic
#define echopin 3  //arduino port connected to echo pin of ultrasonic
#define led 4
//int duration; //time taken by signals to bounce
float distance;//distance between sensor and object
Servo door; // name of servo moto

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT); 
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  door.attach(5);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, LOW); //ultrasonic start at lower status 
  delay(10);
  digitalWrite(2, HIGH);//ultrasonic get high after reading data 
   delay(20);
  digitalWrite(2, LOW);//ultrasonic return to lower status 
  int duration = pulseIn(3,HIGH); //READ DURATION ACCORDING TO BOUNCED SIGNALS that's why we use plseIn
  float distnce = duration * 0.034 /2; //0.034 is the speed of light in millimeter per millisecond divide by 2 to take only bounced signals
  //we use speed of light bcz there is non delay need to receive signals 
  Serial.println("distance = ");
  Serial.print(distance);
  //logic of the program
  if(distance<20){
    digitalWrite(4, HIGH);
    door.write(0-180);
    
  }else{
    digitalWrite(4, LOW);
  }
  

}
