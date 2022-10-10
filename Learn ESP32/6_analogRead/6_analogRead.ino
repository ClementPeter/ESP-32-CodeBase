//Program to read analog values from Potentiometer
int potPin =13;
int potVal;
void setup() {
  // put your setup code here, to run once:
   Serial.begin(115200);
   pinMode(potPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal =analogRead(potPin);
  Serial.println(potVal);
  delay(100);
}
