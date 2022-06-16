int redLed = 12;
int greenLed = 11;
int buzzer = 10;
int smokeA0 = A5;
int flameA0 = A4;
// Your threshold value
int sensorThres = 400;
int sensorThres2 = 200;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  pinMode(flameA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);
  int analogSensor2 = analogRead(flameA0);

  Serial.print("Pin A1: ");
  Serial.println(analogSensor);
  Serial.print("Pin A2: ");
  Serial.println(analogSensor2);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    tone(buzzer, 1000, 200);
  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, LOW);
    noTone(buzzer);
  }
    delay(100);

  if (analogSensor2 < sensorThres2)
  {
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
    tone(buzzer, 1000, 200);
  }
  else
  {
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, LOW);
    noTone(buzzer);
  }
  delay(100);
}
