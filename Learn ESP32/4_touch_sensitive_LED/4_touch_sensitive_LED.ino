//Program to use the Touch read function to control an LED
int led = 23;
int touch;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  touch = touchRead(2);
  Serial.println(touch);
  if (touch <= 20) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}



////Program to use the Touch read function / threshold to control an LED
//int led = 23;
//int touchValue;
//int threshold =20;
//
//void setup() {
//  // put your setup code here, to run once:
//  Serial.begin(115200);
//  pinMode(led, OUTPUT);
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  touchValue = touchRead(2);
//  Serial.println(touchValue);
//  if (touchValue < threshold) {
//    digitalWrite(led, HIGH);
//  } else{
//    digitalWrite(led, LOW);
//  }
//}
