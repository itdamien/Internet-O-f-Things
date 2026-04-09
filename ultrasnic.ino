#define trigping 2
#define echopin 3
#define led 4
//int duration; //time taken by signals to bounce
float distance;//distance between sensor and object

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, LOW);
  delay(10);
  digitalWrite(2, HIGH);
   delay(20);
  digitalWrite(2, LOW);
  int duration = pulseIn(3,HIGH); //READ DURATION ACCORDING TO BOUNCED SIGNALS that's why we use plseIn
  float distnce = duration * 0.034 /2; //0.034 is the speed of light in millimeter per millisecond divide by 2 to take only bounced signals
  //we use speed of light bcz there is non delay need to receive signals 
  Serial.println("distance = ");
  Serial.print(distance);
  //logic of the program
  if(distance<20){
    digitalWrite(4, HIGH);
    
  }else{
    digitalWrite(4, LOW);
  }
  

}
