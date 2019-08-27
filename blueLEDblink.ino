const uint8_t BLUE_LED = 2;

void setup() {
  pinMode(BLUE_LED, OUTPUT);
}

void loop() {
  digitalWrite(BLUE_LED, HIGH);
  delay(100);
  digitalWrite(BLUE_LED, LOW);
  delay(100);
}
