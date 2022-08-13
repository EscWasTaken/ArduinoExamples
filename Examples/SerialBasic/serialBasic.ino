// Licensed Under MIT
// https://github.com/EscWasTaken/ArduinoExamples/blob/main/LICENSE

int inputData;

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // halts until serial is connected
  }
}

// On serial recieve, return "A"
void loop() {
  if (Serial.available() > 0) {
    inputData = Serial.read();
    Serial.println("A"); 
  }
}
