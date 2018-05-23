void setup() {
 Serial.begin(19200);
 pinMode(A0, INPUT);
 pinMode(A1, INPUT);
 pinMode(A2, INPUT);
}
void loop() {
 int value1;
 int value2; 
 int value3;
 
 value1 = analogRead(A0);
 value2 = analogRead(A1);
 value3 = analogRead(A2); 
 
 Serial.print(value1);
 Serial.print(" ");
 Serial.print(value2);
 Serial.print(" ");
 Serial.print(value3);
 Serial.println(" 0 1023");
}
