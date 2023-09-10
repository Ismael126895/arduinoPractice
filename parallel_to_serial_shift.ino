int latchPin=11;
int clockPin=9;
int dataPin=12;

byte LEDs1=0B10101010;
byte LEDs2=0B01010101;
int dt=150;
void setup() {
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
}

void loop() {
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs1);
  digitalWrite(latchPin,HIGH);
  delay(dt);
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs2);
  digitalWrite(latchPin,HIGH);
  delay(dt);
}
