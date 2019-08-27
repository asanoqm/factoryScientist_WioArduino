const uint8_t FUNC_BTN = 0;
int val = 0;

void setup() {
  Serial.begin(115200);
  pinMode(FUNC_BTN, INPUT);
}

void loop() {
  val = digitalRead(FUNC_BTN);
  Serial.println(val);
  delay(1000);  
}
