const int buttonForward = 2;
const int buttonReverse = 3;
const int ENA = 10;
const int IN1 = 8;
const int IN2 = 9;
const int ledForward = 4;
const int ledReverse = 5;

int motorSpeed = 100;
int motorStatus = 0; // 0=Stop, 1=Forward, 2=Reverse

void setup() {
  pinMode(buttonForward, INPUT);
  pinMode(buttonReverse, INPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ledForward, OUTPUT);
  pinMode(ledReverse, OUTPUT);
  stopMotor();
}

void loop() {
  // --- Forward Button Logic ---
  if (digitalRead(buttonForward) == HIGH) {
    delay(50); // Small debounce
    if (motorStatus == 1) {
      stopMotor(); 
    } else {
      moveForward(); 
    }
    while(digitalRead(buttonForward) == HIGH); 
    delay(50); 
  }

  // --- Reverse Button Logic ---
  if (digitalRead(buttonReverse) == HIGH) {
    delay(50);
    if (motorStatus == 2) {
      stopMotor();
    } else {
      moveReverse();
    }
    while(digitalRead(buttonReverse) == HIGH);
    delay(50);
  }
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, motorSpeed);
  digitalWrite(ledForward, HIGH);
  digitalWrite(ledReverse, LOW);
  motorStatus = 1;
}

void moveReverse() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, motorSpeed);
  digitalWrite(ledForward, LOW);
  digitalWrite(ledReverse, HIGH);
  motorStatus = 2;
}

void stopMotor() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);
  digitalWrite(ledForward, LOW);
  digitalWrite(ledReverse, LOW);
  motorStatus = 0;
}