#include <SerialCommand.h>
SerialCommand sCmd;
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  sCmd.addCommand("LED_ON", a);
  sCmd.addCommand("LED_OFF", b);

}

void loop() {
  // put your main code here, to run repeatedly:
  sCmd.readSerial();

}

void a(){
  digitalWrite(LED_BUILTIN, HIGH);  
}

void b(){
  digitalWrite(LED_BUILTIN, LOW);  
}
