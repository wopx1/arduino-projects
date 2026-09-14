void setup() {
  pinMode(12, OUTPUT);  // LED أحمر
  pinMode(11, OUTPUT);  // LED أخضر
}

void loop() {
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(500);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(500);
}
