const int DELAY_TIME = 1000;



void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  delay(DELAY_TIME);
  digitalWrite(3, HIGH);
  delay(DELAY_TIME);
  digitalWrite(4, HIGH);
  delay(DELAY_TIME);
  digitalWrite(5, HIGH);
  delay(DELAY_TIME);
  digitalWrite(6, HIGH);
  delay(DELAY_TIME);
  digitalWrite(7, HIGH);
  delay(DELAY_TIME);
  digitalWrite(8, HIGH);
  delay(DELAY_TIME);
  digitalWrite(9, HIGH);
  delay(DELAY_TIME);
  digitalWrite(9, LOW);
  delay(DELAY_TIME);
  digitalWrite(8, LOW);
  delay(DELAY_TIME);
  digitalWrite(7, LOW);
  delay(DELAY_TIME);
  digitalWrite(6, LOW);
  delay(DELAY_TIME);
  digitalWrite(5, LOW);
  delay(DELAY_TIME);
  digitalWrite(4, LOW);
  delay(DELAY_TIME);
  digitalWrite(3, LOW);
  delay(DELAY_TIME);
  digitalWrite(2, LOW);
  delay(DELAY_TIME);
}