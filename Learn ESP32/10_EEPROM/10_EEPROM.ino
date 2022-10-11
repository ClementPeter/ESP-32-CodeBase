//program to save the last state of a button to flash memory---Saving Data to flash memory
#include<EEPROM.h>
#define EEPROM_SIZE 1 // Define the number of byte to access

const int buttonPin=4;
const int ledPin=16;

int ledState =HIGH;
int buttonState;
int lastButtonState =LOW;

unsigned long lastDebounceTime =0;
unsigned long debounceDelay =50;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(115200);
     EEPROM.begin(EEPROM_SIZE);

     pinMode(buttonPin, INPUT);
     pinMode(ledPin,OUTPUT);

     ledState = EEPROM.read(0);
     digitalWrite(ledPin,ledState);
}

//Refer to Debounce Sketch
void loop() {
  // put your main code here, to run repeatedly:
  int reading = digitalRead(buttonPin);

    if(reading != lastButtonState){
      lastDebounceTime = millis(); 
    }
    if((millis()-lastDebounceTime)> debounceDelay){
      if(reading != buttonState){
        buttonState = reading;
        if(buttonState ==HIGH){
          ledState = ! ledState;
        }
      }      
    }
    lastButtonState = reading;

    if (digitalRead(ledPin) != ledState){
      Serial.println("State Changed");
      digitalWrite(ledPin,ledState);
      EEPROM.write(0,ledState);
      EEPROM.commit();
      Serial.println(" State saved   ");
    }  
}
