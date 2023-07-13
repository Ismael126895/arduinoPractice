#include <Servo.h>
int servoPin=9;
int servoPos=165;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("What angle for the Servo? ");
  while(Serial.available()==0){
    // Wait for input from the serial monitor
  }
  Serial.println("I am past the first available");
  // Clear the serial buffer
  while(Serial.available()){
    Serial.read();
  }
  Serial.println("I am past clearing the buffer");
  while(Serial.available()==0){
    // Wait for new input after clearing the buffer
  }
  Serial.println("I am ACTING!!!");
  servoPos=Serial.parseInt();
  myServo.write(servoPos);
}
