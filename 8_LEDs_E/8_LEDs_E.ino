

int ledPins[] = {2,3,4,5,6,7,8,9};

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  int index = random(8);
  int delayTime = random(100, 1000);  
  int high_or_low = random(2);
  
  if (high_or_low == 0) {
    digitalWrite(ledPins[index], HIGH);
  } else {
    digitalWrite(ledPins[index], LOW);
  }
  
  delay(delayTime);
}