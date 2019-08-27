const uint8_t BLUE_LED = 2;

void setup() {
  pinMode(BLUE_LED, OUTPUT);
}

void loop() {
  digitalWrite(BLUE_LED, HIGH);
  delay(1000);
  digitalWrite(BLUE_LED, LOW);
  delay(1000);
}
