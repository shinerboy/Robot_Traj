#include <RobotTraj.h>

RobotTraj robot(); //Object 
int i=1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  int len = RobotTraj().GetLengthTraj1(); //Get the length of trajectory
 
  
  while (i<= len){
     float value1 = RobotTraj().GetTraj1(1,i); //GetTraj1(motornumber, stepnumber)
     float value2 = RobotTraj().GetTraj1(2,i);
     float value3 = RobotTraj().GetTraj1(3,i);
     float value4 = RobotTraj().GetTraj1(4,i);
     Serial.println(len);
     Serial.print(value1);
     Serial.print("--");
     Serial.print(value2);
     Serial.print("--");
     Serial.print(value3);
     Serial.print("--");
     Serial.println(value4);

     delay(500);

     i=i+1;
  }
  
  

}
