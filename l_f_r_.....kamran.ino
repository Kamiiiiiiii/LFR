
int left_sensor=2;
int right_sensor=3;
int left1_motorforward=4;
int right2_motorforward=5;
int left3_motorforward=6;
int right4_motorforward=7;
void setup() {
  // put your setup code here, to run once:

pinMode(left_sensor,INPUT);
pinMode(right_sensor,INPUT);
pinMode(left1_motorforward,OUTPUT);
pinMode(right2_motorforward,OUTPUT);
pinMode(left3_motorforward,OUTPUT);
pinMode(right4_motorforward,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 if ( digitalRead(left_sensor<500) && digitalRead(right_sensor<500)){// forward
  digitalWrite(left1_motorforward,255);
  digitalWrite(right2_motorforward,255);
}
else if(digitalRead(left_sensor<500) && digitalRead(right_sensor>500)){// right senor stop  ... left sensor forward 
   digitalWrite(left1_motorforward,255);
   digitalWrite(right2_motorforward,0);
}
else if(digitalRead(left_sensor>500) && digitalRead(right_sensor<500)){ // left sensor stop.....right sensor forward
  digitalWrite(left1_motorforward,0);
   digitalWrite(right2_motorforward,255);
}
else {
  digitalWrite(left1_motorforward,0);
  digitalWrite(right2_motorforward,0); /// stop car 
}

}
