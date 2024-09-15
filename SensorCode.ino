// Define pins
const int trigPin = 9;
const int echoPin = 10;
const int ledGaragePin = 3;
const int ledAlertPin = 4;
const int buzzerPin = 5;

// Define variables for distance measurement
long duration;
int distance;

// Define thresholds
const int ledledGarageThreshold = 30;  // Distance at which LEDs turn on (in cm)
const int ledledAlertThreshold = 15;  // Distance at which LEDs turn on (in cm)
const int buzzerThreshold = 1;  // Distance at which buzzer sounds (in cm)

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize pin modes
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledGaragePin, OUTPUT);
  pinMode(ledAlertPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  // Turn off LEDs and buzzer initially
  digitalWrite(ledGaragePin, LOW);
  digitalWrite(ledAlertPin, LOW);
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Set the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin, return the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance
  distance = duration * 0.034 / 2;

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if the vehicle is within the LED threshold distance
  if (distance > 0 && distance <= ledledGarageThreshold) {
    digitalWrite(ledGaragePin, HIGH);  // Turn on LEDs
  } else {
    digitalWrite(ledGaragePin, LOW);  // Turn off LEDs
  }

    // Check if the vehicle is within the LED threshold distance
  if (distance > 0 && distance <= ledledAlertThreshold) {
    digitalWrite(ledAlertPin, HIGH);  // Turn on LEDs
  } else {
    digitalWrite(ledAlertPin, LOW);  // Turn off LEDs
  }

  // Check if the vehicle is within the buzzer threshold distance
  if (distance > 0 && distance >= buzzerThreshold) {
    digitalWrite(buzzerPin, HIGH);  // Turn on buzzer
  } else {
    digitalWrite(buzzerPin, LOW);  // Turn off buzzer
  }

  // Short delay before the next loop
  delay(100);
}