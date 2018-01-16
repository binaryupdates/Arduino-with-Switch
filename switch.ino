int ledPin = 13;
int buttonPin = 7;

int flag = 1;
int buttonStatus = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {

  int currentStatus = digitalRead(buttonPin);

  if (currentStatus == HIGH && buttonStatus == LOW) {
    if (flag == 0) {
      digitalWrite(ledPin, HIGH);
      flag = 1;
    } else {
      digitalWrite(ledPin, LOW);
      flag = 0;
    }
  }

  buttonStatus = currentStatus;
}
