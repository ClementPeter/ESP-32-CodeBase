//int buttonpin = 17;
//int buttonRead;
//
//void setup() {
//  // put your setup code here, to run once:
//  Serial.begin(115200);
//  pinMode(buttonpin, INPUT);

//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  buttonRead = digitalRead(buttonpin);
//  Serial.println(buttonRead);
//}

int buttonpin = 17;
int led = 23;
int buttonRead;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(buttonpin, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead = digitalRead(buttonpin);
  Serial.println(buttonRead);

  if (buttonRead == HIGH) {
    // turn LED on
    digitalWrite(led, HIGH);
  } else {
    // turn LED off
    digitalWrite(led, LOW);
  }

}
