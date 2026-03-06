int pushButton = 2;
int porchLED = 5;
int hallwayLED = 6;

void setup() {
  pinMode(pushButton, INPUT_PULLUP);
  pinMode(porchLED, OUTPUT);
  pinMode(hallwayLED, OUTPUT);
}

void loop() {

  if (digitalRead(pushButton) == LOW) {

    digitalWrite(porchLED, HIGH);
    digitalWrite(hallwayLED, HIGH);

    delay(30000);          // porch light stays on 30 seconds
    digitalWrite(porchLED, LOW);

    delay(30000);          // hallway light stays on total 60 so just extra 60 seconds
    digitalWrite(hallwayLED, LOW);
  }

}
