
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("ESP32 Touch Test");
}

void loop() {
  // put your main code here, to run repeatedly:   
  Serial.println(touchRead(4));

}
