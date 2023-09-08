int tiltPin=2;
int greenLedPin=3;
int redLedPin=4;

int tiltVal;
void setup() {
  pinMode(tiltPin,INPUT);
  pinMode(greenLedPin,OUTPUT);
  pinMode(redLedPin,OUTPUT);
  digitalWrite(tiltPin,HIGH);
  Serial.begin(9600);
}

void loop() {
  tiltVal=digitalRead(tiltPin);
  Serial.println(tiltVal);
  if (tiltVal==0){
    digitalWrite(greenLedPin,HIGH);
    digitalWrite(redLedPin,LOW);
  }
  if (tiltVal==1){
    digitalWrite(redLedPin,HIGH);
    digitalWrite(greenLedPin,LOW);
  }

}
