#include <Servo.h>

Servo myservo; // 建立Servo物件

void setup() 
{ 
  myservo.attach(9); // 伺服馬達的訊號線
} 

void loop() {
    myservo.write(0); 
    delay(100);
    myservo.write(90); 
    delay(100);
    myservo.write(180); 
    delay(110);
    myservo.write(90); 
    delay(1000);
}