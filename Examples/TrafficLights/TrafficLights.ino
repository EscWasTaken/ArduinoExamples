#include "FastLED.h"

#define NUM_LEDS 60
#define DATA_PIN 14
CRGB leds[NUM_LEDS];
String inputData;

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);

  Serial.begin(9600);
  while (!Serial) {
    ; // halts until serial is connected
  }
}

void loop() {
  int i;
  String content = " ";
  char character;
  while (Serial.available()) {
    character = Serial.read();
    content.concat(character);
  }

  if (content != " "){
    if (content.indexOf("go") > 0) {
      for (i=0; i < NUM_LEDS; i++) {
      leds[i] = CRGB::Green;
      }
      FastLED.show();
    }
    else if (content.indexOf("stop") > 0){
      for (i=0; i < NUM_LEDS; i++) {
      leds[i] = CRGB::Red;
      }
      FastLED.show();
    }
  }
}
