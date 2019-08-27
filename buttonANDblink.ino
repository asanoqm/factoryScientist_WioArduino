const uint8_t BLUE_LED = 2;
const uint8_t FUNC_BTN = 0;
int val = 0;

void setup() {
//  Serial.begin(115200);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(FUNC_BTN, INPUT);
}

void loop() {
  val = digitalRead(FUNC_BTN);
//  Serial.println(val);

  if(val == 0){
    digitalWrite(BLUE_LED,LOW);
  }else{
    digitalWrite(BLUE_LED,HIGH);
  }
}
