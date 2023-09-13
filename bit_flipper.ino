int latchPin=11;
int clockPin=9;
int dataPin=12;

byte myByte=0xAA;
byte myByteFlipped;
int dt=1000;
void setup() {
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
}

void loop() {
  
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,myByte);
  digitalWrite(latchPin,HIGH);
  myByteFlipped=255-myByte;
  delay(dt);
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,myByteFlipped);
  digitalWrite(latchPin,HIGH);
  delay(dt);
}
