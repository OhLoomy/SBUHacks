const int ledPin {11};     // LED connected to digital pin 11
const int buttonPin {3};   // Button connected to digital pin 3

const unsigned long Time {5000};  // 1000 = 1 second

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT);
}

void loop() {
    int buttonState = digitalRead(buttonPin);

// Button press
if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);   // Turn LED on
    delay(Time);                // Keep it on for time in milliseconds
    digitalWrite(ledPin, LOW);    // Turn LED off
  }
}
