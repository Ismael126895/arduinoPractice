int latchPin=11;
int clockPin=9;
int dataPin=12;

byte myByte=0B01010101;
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

  Serial.println(myByte,BIN);
  delay(dt);
  myByte=myByte/2;//shift to the right
  myByte=myByte*2;//shift to the left
  
}
