#include <Servo.h>

int ledpin = 2;
int IRpin = 5;
Servo door;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600); 
pinMode(2,OUTPUT);
pinMode(5,INPUT);
door.write(4);

}

void loop() {
  // put your main code here, to run repeatedly:

int IR= digitalRead(5);
Serial.println(IR);
if(IR == LOW){
  digitalWrite(2,HIGH);
  door.write(0-180);
  delay(1000);
}
  else{
  digitalWrite(2,LOW);
  delay(1000);
  }
}
