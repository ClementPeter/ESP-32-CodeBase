#define timeSeconds 10

//Assign pins for LED and PIR
const int led = 23;
const int pir =  5;
//
unsigned long now =millis();
unsigned long lastTrigger =0;
boolean startTimer = false;


//Function check to see if motion is detected...then set LED and TIMER, ON
void IRAM_ATTR detectMovement(){
   Serial.println('Motion Detected');
   digitalWrite(led,HIGH);
   startTimer = true;
   lastTrigger = millis();  
}

void setup() {
  // put your setup code here, to run once:
   Serial.begin(115200);
   pinMode(pir,INPUT_PULLUP);
   attachInterrupt(digitalPinToInterrupt(pir), detectMovement, RISING );
   Serial.println("interrupt started");
   pinMode(led,OUTPUT);
   digitalWrite(led,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  now = millis();
  //Turns OFF LED after number of seconds
  if(startTimer &&(now -lastTrigger> (timeSeconds*1000))){
    Serial.println("Motion Stopped");
    digitalWrite(led ,LOW);
    startTimer =false;
  }
}
