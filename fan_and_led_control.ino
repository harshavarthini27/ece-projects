// Basic Embedded Interfacing: Peripheral Device Control
// Designed to control a 5V cooling fan and a status indicator LED

const int fanPin = 12; // Digital output pin connected to the fan relay interface
const int ledPin = 13; // Digital output pin connected to the indicator LED

void setup() {
  // Initialize the digital pins as output interfaces
  pinMode(fanPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Scenario: Turn on the system cooling fan and status LED
  digitalWrite(fanPin, HIGH); // Turn fan ON
  digitalWrite(ledPin, HIGH); // Turn LED ON
  delay(3000);                // Keep both running for 3 seconds

  // Scenario: Turn off devices to end the cycle/save power
  digitalWrite(fanPin, LOW);  // Turn fan OFF
  digitalWrite(ledPin, LOW);  // Turn LED OFF
  delay(3000);                // Keep both off for 3 seconds
}
