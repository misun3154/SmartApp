#include<SoftwareSerial.h>
SoftwareSerial BT(2,3);
void setup() {
  BT.begin(9600);
Serial.begin(9600);
  
}
int a=0;
char data[2];
void loop() {
int a=digitalRead(8);
Serial.println(a);
sprintf(data,"%01d",a);
BT.print(data);
delay(100);
}
