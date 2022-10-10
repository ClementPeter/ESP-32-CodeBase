//ESP 32 DIFFERENT PWM SIGNAL OF VARIOUS GPIO
// the number of the LED pin
int ledPin1 = 23;
int ledPin2 = 19;
int wait = 5;

// setting PWM properties
int freq1 = 1000;
int freq2 = 5000;
int ledChannel1 = 0;
int ledChannel2 = 2;
int resolution = 8;

void setup() {
  // put your setup code here, to run once:
  // configure LED PWM functionalitites
  ledcSetup(ledChannel1, freq1, resolution);
  ledcSetup(ledChannel2, freq2, resolution);

  // attach the channel to the GPIO to be controlled
  ledcAttachPin(ledPin1, ledChannel1);
  ledcAttachPin(ledPin2, ledChannel2);
}

void loop() {
  // put your main code here, to run repeatedly:
  // increase the LED brightness
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
    ledcWrite(ledChannel1, dutyCycle);
    delay(wait);
  }
  // decrease the LED brightness
  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
    ledcWrite(ledChannel2, dutyCycle);
    delay(wait);
  }
}





////ESP 32 SAME PWM SIGNAL OF VARIOUS GPIO
//// the number of the LED pin
//int ledPin1 = 23;
//int ledPin2 = 19;
//int wait = 5;
//
//// setting PWM properties
//int freq = 1000;
//int ledChannel = 0;
//int resolution = 8;
//
//void setup() {
//  // put your setup code here, to run once:
//  // configure LED PWM functionalitites
//  ledcSetup(ledChannel, freq, resolution);
//
//  // attach the channel to the GPIO to be controlled
//  ledcAttachPin(ledPin1, ledChannel);
//  ledcAttachPin(ledPin2, ledChannel);
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  // increase the LED brightness
//  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
//    ledcWrite(ledChannel, dutyCycle);
//    delay(wait);
//  }
//  // decrease the LED brightness
//  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
//    ledcWrite(ledChannel, dutyCycle);
//    delay(wait);
//  }
//}

///ESP32 PWM
//// the number of the LED pin
//const int ledPin = 23;
//int wait =5;
//
//// setting PWM properties
//const int freq = 5000;
//const int ledChannel = 2;
//const int resolution = 8;
//
//void setup() {
//  // put your setup code here, to run once:
//  // configure LED PWM functionalitites
//  ledcSetup(ledChannel, freq, resolution);
//
//  // attach the channel to the GPIO to be controlled
//  ledcAttachPin(ledPin, ledChannel);
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  // increase the LED brightness
//  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
//    ledcWrite(ledChannel, dutyCycle);
//    delay(wait);
//    }
//    // decrease the LED brightness
//  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
//    ledcWrite(ledChannel, dutyCycle);
//    delay(wait);
//    }
// }
