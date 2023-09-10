int latchPin=11;
int clockPin=9;
int dataPin=12;

int dt=100;
void setup() {
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
}

void loop() {
  for (byte i=0x00;i<=0xFF;i++){
    digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,i);
  digitalWrite(latchPin,HIGH);
  if (i == 0xFF){
    delay(5000);
  }else{
    delay(dt);
  }
 }
}
