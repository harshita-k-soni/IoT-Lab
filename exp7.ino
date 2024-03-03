#define fastButton 7
#define slowButton 10
#define led 2

unsigned long previousMillis = 0;
const long intervalFast = 100;
const long intervalSlow = 2000;
boolean ledState = LOW;

void setup() {
  pinMode(fastButton, INPUT);
  pinMode(slowButton, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();
  int fast = digitalRead(fastButton);
  int slow = digitalRead(slowButton);

  if (fast == LOW) {
    blink(intervalFast);
  } else if (slow == LOW) {
    blink(intervalSlow);
  } else {
    // If no button is pressed, turn off the LED
    digitalWrite(led, LOW);
  }
}

void blink(long interval) {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    ledState = !ledState;
    digitalWrite(led, ledState);
  }
}
