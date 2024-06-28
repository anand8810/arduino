#include <Servo.h>

Servo myServo;
const int servoPin=9;
void setup() {
  // put your setup code here, to run once:
myServo.attach(servoPin);
}

void loop()
{
  myServo.write(0);
  delay(1000);

 myServo.write(90);
  delay(1000);

 myServo.write(180);
  delay(1000);

}
