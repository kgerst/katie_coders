const int DELAY_TIME = 1000;

int ledPins[] = {2,3,4,5,6,7,8,9};

void setup() {
  pinMode(ledPins[0], OUTPUT);
  pinMode(ledPins[1], OUTPUT);
  pinMode(ledPins[2], OUTPUT);
  pinMode(ledPins[3], OUTPUT);
  pinMode(ledPins[4], OUTPUT);
  pinMode(ledPins[5], OUTPUT);
  pinMode(ledPins[6], OUTPUT);
  pinMode(ledPins[7], OUTPUT);
}

void loop() {
  digitalWrite(ledPins[0], HIGH);
  delay(DELAY_TIME);
  digitalWrite(ledPins[1], HIGH);
  delay(DELAY_TIME);
  digitalWrite(ledPins[2], HIGH);
  delay(DELAY_TIME);
  digitalWrite(ledPins[3], HIGH);
  delay(DELAY_TIME);
  digitalWrite(ledPins[4], HIGH);
  delay(DELAY_TIME);
  digitalWrite(ledPins[5], HIGH);
  delay(DELAY_TIME);
  digitalWrite(ledPins[6], HIGH);
  delay(DELAY_TIME);
  digitalWrite(ledPins[7], HIGH);
  delay(DELAY_TIME);
  digitalWrite(ledPins[7], LOW);
  delay(DELAY_TIME);
  digitalWrite(ledPins[6], LOW);
  delay(DELAY_TIME);
  digitalWrite(ledPins[5], LOW);
  delay(DELAY_TIME);
  digitalWrite(ledPins[4], LOW);
  delay(DELAY_TIME);
  digitalWrite(ledPins[3], LOW);
  delay(DELAY_TIME);
  digitalWrite(ledPins[2], LOW);
  delay(DELAY_TIME);
  digitalWrite(ledPins[1], LOW);
  delay(DELAY_TIME);
  digitalWrite(ledPins[0], LOW);
  delay(DELAY_TIME);
}