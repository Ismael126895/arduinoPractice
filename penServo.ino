#include <Servo.h>
Servo penServo1;
Servo penServo2;

//setting servo pins
int servoPin1 = 9;
int servoPin2 = 10;
int servo1angle;
int servo2angle;

//setting joystic pins
int Xpin=A0;
int Ypin=A1;
int Xval;
int Yval;

//setting buzzer pins
int buzzPin1=2;
int buzzPin2=4;

//setting delay time
int dt=200;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(buzzPin1,OUTPUT);
  pinMode(buzzPin2,OUTPUT);
  penServo1.attach(servoPin1);
  penServo2.attach(servoPin2);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xval=analogRead(Xpin);
  Yval=analogRead(Ypin);
  servo1angle=(60./341.)*Xval;
  servo2angle=(60./341.)*Yval;
  if((servo1angle)>170){
    digitalWrite(buzzPin1,HIGH);
    digitalWrite(buzzPin2,HIGH);
    delay(dt);
    digitalWrite(buzzPin1,LOW);
    digitalWrite(buzzPin2,LOW);
  }
  Serial.print(" The X value is ");
  Serial.print(Xval);
  Serial.print(" The X angle is ");
  Serial.print(servo1angle);
  Serial.print(" The Y value is ");
  Serial.print(Yval);
  Serial.print(" The Y angle is ");
  Serial.println(servo2angle);
  penServo1.write(servo1angle);
  penServo2.write(servo2angle);
  delay(dt);
}
