int trigPin = 12;
int echoPin = 11;
int pingTravelTime,pingDistance;
void setup() {
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  pingTravelTime=pulseIn(echoPin,HIGH);
  pingDistance=0.005214*pingTravelTime;
  Serial.print(0);
  Serial.print(",");
  Serial.print(pingDistance);
  Serial.print(",");
  Serial.println(10);
  //the statements are used to delimit the regions for plotting
  delay(25);

}
