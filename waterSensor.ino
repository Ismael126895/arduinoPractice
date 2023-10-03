int readPin=A0;
float level;
void setup() {
  Serial.begin(9600);
  pinMode(readPin,INPUT);

}

void loop() {
  level=analogRead(readPin);
  Serial.println(level);

}
