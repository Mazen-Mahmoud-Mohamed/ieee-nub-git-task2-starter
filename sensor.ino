// IEEE NUB Git Lab - Task 2 training project
// Smart Plant Monitor: classroom example (no real credentials).
const int sensorPin = A0;
const int buzzerPin = 8;
const int dryThreshold = 35;

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  const int moistureReading = analogRead(sensorPin);
  const bool isDry = moistureReading < dryThreshold;
  digitalWrite(buzzerPin, isDry ? HIGH : LOW);
  // Simulated LCD output; no external LCD library or hardware is required.
  Serial.print("[LCD] ");
  Serial.println(isDry ? "DRY SOIL" : "SOIL OK");
  delay(500);
}
