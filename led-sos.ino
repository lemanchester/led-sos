
// LED connected to digital pin 10
#define ledPin 10

// run once, when the sketch starts
void setup() {
  pinMode(ledPin, OUTPUT);
}

// run over and over again
void loop() {
  // 3 dits (...)
  letterS();
  // 100ms delay to cause slight gap between letters
  delay(100);
  // 3 dahs (---)
  letterO();
  // 100ms delay to cause slight gap between letters
  delay(100);
  // 3 dits (...)
  letterS();
  // wait 5 seconds before repeating the SOS signal
  delay(5000);
}

void letterS() {
  for (int i= 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH); // sets the LED on
    delay(150); // waits for 150ms
    digitalWrite(ledPin, LOW); // sets the LED off
    delay(100); // waits for 100ms
  }
}

void letterO() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH); // sets the LED on
    delay(400); // waits for 400ms
    digitalWrite(ledPin, LOW); // sets the LED off
    delay(100); // waits for 100ms
  }
}
