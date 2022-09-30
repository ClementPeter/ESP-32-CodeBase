//Program to use the capacitive touch feature in the ESP-32
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("ESP-32 Touch Test");
}

void loop() {
  // put your main code here, to run repeatedly:   
  Serial.println(touchRead(4));
}
