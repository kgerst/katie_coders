const int DELAY_TIME = 1000;

int ledPins[] = {2,3,4,5,6,7,8,9};

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(DELAY_TIME);
  }
  for (int i = 7; i > -1; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(DELAY_TIME);
  }
}