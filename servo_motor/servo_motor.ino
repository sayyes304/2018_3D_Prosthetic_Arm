#include <Servo.h>

Servo a,b,c,d,e;

 

void setup() {
a.attach(5);
b.attach(6);
c.attach(9);
d.attach(10);
e.attach(11);

  a.write(0);
  b.write(0);
  c.write(0);
  d.write(0);
  e.write(0);

}

 

void loop() {
delay(1000);
  a.write(100);
  b.write(100);
  c.write(100);
  d.write(100);
  e.write(100);
  
delay(1000);
  a.write(0);
  b.write(0);
  c.write(0);
  d.write(0);
  e.write(0);
 }

