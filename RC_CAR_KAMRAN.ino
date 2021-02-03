#include <AFMotor.h>

AF_DCMotor1(1, MOTOR12_1KHZ);
AF_DCMotor1(2, MOTOR12_1KHZ);
AF_DCMotor1(3, MOTOR34_1KHZ);
AF_DCMotor1(4, MOTOR34_1KHZ);

char commond;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (serial.available()>0)
{
  command=Serial.read();
  stop();
  //serial.println(commond)
  {
    case 'F':
    forward();
    break;
    case 'B':
    backward();
    break;
    case 'L':
    left();
    break;
    case 'R':
    right();
    break;
  }
}
}
void forward()
   {
    motor1.setSpeed(255);
    motor1.run(FORWARD);
    motor2.setSpeed(255);
    motor2.run(FORWARD);
    motor3.setSpeed(255);
    motor3.run(FORWARD);
    motor4.setSpeed(255);
    motor4.run(FORWARD);
   }    
void backward()
{
    motor1.setSpeed(255);
    motor1.run(BACKWARD);
    motor2.setSpeed(255);
    motor2.run(BACKWARD);
    motor3.setSpeed(255);
    motor3.run(BACKWARD);
    motor4.setSpeed(255);
    motor4.run(BACKWARD); 
}
void left()
   {
    motor1.setSpeed(255);
    motor1.run(LEFT);
    motor2.setSpeed(255);
    motor2.run(LEFT);
    motor3.setSpeed(255);
    motor3.run(LEFT);
    motor4.setSpeed(255);
    motor4.run(LEFT);
   }
void right()
   {
    motor1.setSpeed(255);
    motor1.run(RIGHT);
    motor2.setSpeed(255);
    motor2.run(RIGHT);
    motor3.setSpeed(255);
    motor3.run(RIGHT);
    motor4.setSpeed(255);
    motor4.run(RIGHT); 
}
void stop()
  {
    motor1.setSpeed(0);
    motor1.run(RELEASE);
    motor2.setSpeed(0);
    motor2.run(RELEASE);
    motor3.setSpeed(0);
    motor3.run(RELEASE);
    motor4.setSpeed(0);
    motor4.run(RELEASE);
  }
