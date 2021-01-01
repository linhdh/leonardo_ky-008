int laserPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; //KY-008 Laser modules connect to these pins
int pinNum = 10;

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < pinNum; i++)
  {
    pinMode(laserPins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  pattern1();
  delay(1000);
  pattern2();
  delay(1000);
  pattern3();
  delay(1000);
  pattern4();
  delay(1000);  
}

void pattern4() {
  for (int i = 0; i < pinNum; i++) {
    blinkLed(laserPins[i], 20, 50, 50);
    delay(1000);
  }
}

void pattern3() {
  for (int i = pinNum-1; i >= 0; i--) {
    blinkLed(laserPins[i], 20, 20, 20);
    delay(1000);
  }
}

void pattern2() {
  for (int i = 0; i < pinNum; i++) {
    digitalWrite(laserPins[i], HIGH);
    delay(200);
  }
  delay(2000);
  for (int i = 0; i < pinNum; i++) {
    digitalWrite(laserPins[i], LOW);
    delay(200);
  }
}

void pattern1() {
  for (int i = 0; i < pinNum; i++) {
    digitalWrite(laserPins[i], HIGH);
  }
  delay(5000);
  for (int i = 0; i < pinNum; i++) {
    digitalWrite(laserPins[i], LOW);
  }
  delay(1000);
}

void blinkLed(unsigned short pin, unsigned short time, unsigned short millisecondOn, unsigned short millisecondOff) {
  for (int i = 0; i < time; i++) {
    digitalWrite(pin, HIGH);
    delay(millisecondOn);
    digitalWrite(pin, LOW);
    delay(millisecondOff);
  }
}
