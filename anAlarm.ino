int buzzPin=8;
int dt1=1;
int dt2=2;
int j;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j=1;j<=100;j=j+1){
    digitalWrite(buzzPin,HIGH);
    delay(dt1);
    digitalWrite(buzzPin,LOW);
    delay(dt1);
  }
  for(j=1;j<=100;j=j+1){
    digitalWrite(buzzPin,HIGH);
    delay(dt2);
    digitalWrite(buzzPin,LOW);
    delay(dt2);
  }
  for(j=1;j<=100;j=j+1){
    digitalWrite(buzzPin,HIGH);
    delay(3);
    digitalWrite(buzzPin,LOW);
    delay(3);
  }
  for(j=1;j<=100;j=j+1){
    digitalWrite(buzzPin,HIGH);
    delay(2);
    digitalWrite(buzzPin,LOW);
    delay(2);
  }
  for(j=1;j<=100;j=j+1){
    digitalWrite(buzzPin,HIGH);
    delay(1);
    digitalWrite(buzzPin,LOW);
    delay(1);
  }
//for(j=1;j<=100;j=j+1){
//digitalWrite(buzzPin,HIGH);
//delay(6);
//digitalWrite(buzzPin,LOW);
//delay(6);
//}
}
