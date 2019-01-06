int ledPinA1 = 1;
int ledPinA2 = 2;
int ledPinB1 = 3;
int ledPinB2 = 4;

int ledA1state = 0;
int ledA2state = 0;
int ledB1state = 0;
int ledB2state = 0;

int buttonA = 10;
int buttonB = 11;
int button1 = 12;
int button2 = 13;

int buttonAstate = 0;
int buttonBstate = 0;
int button1state = 0;
int button2state = 0;

int buttonDelay = 200;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPinA1, OUTPUT);
  pinMode(ledPinA2, OUTPUT);
  pinMode(ledPinB1, OUTPUT);
  pinMode(ledPinB2, OUTPUT);

  pinMode(buttonA, INPUT);
  pinMode(buttonB, INPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ledA1state = digitalRead(ledPinA1);
  ledA2state = digitalRead(ledPinA2);
  ledB1state = digitalRead(ledPinB1);
  ledB2state = digitalRead(ledPinB2);

  buttonAstate = digitalRead(buttonA);
  buttonBstate = digitalRead(buttonB);
  button1state = digitalRead(button1);
  button2state = digitalRead(button2);

  if (buttonAstate == HIGH) {
    if (ledA1state == HIGH) {
      digitalWrite(ledPinA1, LOW);
    } else {
      digitalWrite(ledPinA1, HIGH);
    }

    if (ledA2state == HIGH) {
      digitalWrite(ledPinA2, LOW);
      delay(buttonDelay);
    } else {
      digitalWrite(ledPinA2, HIGH);
      delay(buttonDelay);
    }
  }

  if (buttonBstate == HIGH) {
    if (ledB1state == HIGH) {
      digitalWrite(ledPinB1, LOW);
    } else {
      digitalWrite(ledPinB1, HIGH);
    }

    if (ledB2state == HIGH) {
      digitalWrite(ledPinB2, LOW);
      delay(buttonDelay);
    } else {
      digitalWrite(ledPinB2, HIGH);
      delay(buttonDelay);
    }
  }

  if (button1state == HIGH) {
    if (ledA1state == HIGH) {
      digitalWrite(ledPinA1, LOW);
    } else {
      digitalWrite(ledPinA1, HIGH);
    }

    if (ledB1state == HIGH) {
      digitalWrite(ledPinB1, LOW);
      delay(buttonDelay);
    } else {
      digitalWrite(ledPinB1, HIGH);
      delay(buttonDelay);
    }
  }

  if (button2state == HIGH) {
    if (ledA2state == HIGH) {
      digitalWrite(ledPinA2, LOW);
    } else {
      digitalWrite(ledPinA2, HIGH);
    }

    if (ledB2state == HIGH) {
      digitalWrite(ledPinB2, LOW);
      delay(buttonDelay);
    } else {
      digitalWrite(ledPinB2, HIGH);
      delay(buttonDelay);
    }
  }
}
