const int buzzer_pin = 12;  // Buzzer connected to GPIO 12
const int ledPin1 = 2;      // LED connected to GPIO 2
const int ledPin2 = 14;     // LED connected to GPIO 14

void setup() {
  pinMode(buzzer_pin, OUTPUT);  // Set buzzer pin as output
  pinMode(ledPin1, OUTPUT);     // Set LED 1 as output
  pinMode(ledPin2, OUTPUT);     // Set LED 2 as output
}

void loop() {
  // Turn on LED 1, turn off LED 2, and turn on buzzer
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(buzzer_pin, HIGH);
  delay(1000);  // Wait for 1 second
  
  // Turn off LED 1, turn on LED 2, and turn off buzzer
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(buzzer_pin, LOW);
  delay(1000);  // Wait for 1 second
}
