//Program to use the In-Built Hall Effect Sensor to read magnetism value;

void setup() {
  // put your setup code here, to run once:
   Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  hallVal =hallRead();
  Serial.println(hallVal);
  delay(100);
}
