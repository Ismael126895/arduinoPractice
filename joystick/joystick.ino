#include <Servo.h>
int servoPin=9;
int servoPos1;
int servoPos2;
int Xpin=A0;
int Ypin=A1;
int Spin=2;
int Xval;
int Yval;
int Sval;
int dt=200;
Servo joyServo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(Spin,INPUT);
  digitalWrite(Spin,HIGH);
  joyServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xval=analogRead(Xpin);
  Yval=analogRead(Ypin);
  servoPos1=(60./341.)*Xval;
  servoPos2=(60./341.)*Yval;
  
  Sval=digitalRead(Spin);
  
  Serial.print("X value = ");
  Serial.print(Xval);
  Serial.print(" servo angle 1 ");
  Serial.print(servoPos1);
  Serial.print(" Y value = ");
  Serial.print(Yval);
  Serial.print(" servo angle 2 ");
  Serial.println(servoPos2);
  joyServo.write(servoPos1);
  delay(dt);
  joyServo.write(servoPos2);
  
  
}
