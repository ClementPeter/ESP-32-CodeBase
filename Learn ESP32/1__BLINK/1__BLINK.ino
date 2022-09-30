//Program to Blink the LED on ESP 32

int  led = 27 ;
int wait = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(led, HIGH);
  delay(wait);
  digitalWrite(led, LOW);
  delay(wait);
}
