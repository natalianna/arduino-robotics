
int ledPin1 = 13; 
int ledPin2 = 9; 
int ledPin3 = 5;// select the pin for the LED


void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
}
void loop() {
  // read the value from the sensor:
 
digitalWrite(ledPin1, HIGH);
 digitalWrite(ledPin2, HIGH); 
digitalWrite(ledPin3, HIGH);
  delay(100);                       
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);    
  digitalWrite(ledPin3, LOW);
  delay(100);  
  digitalWrite(ledPin1, HIGH);
 digitalWrite(ledPin2, HIGH); 
digitalWrite(ledPin3, HIGH);
  delay(500);                       
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);    
  digitalWrite(ledPin3, LOW);
  delay(100);  
 
  
  digitalWrite(ledPin1, HIGH);
  delay(150); 
  digitalWrite(ledPin1, LOW);
  delay(100); 

  digitalWrite(ledPin2, HIGH);
  delay(150); 
  digitalWrite(ledPin2, LOW);
  delay(100); 

  digitalWrite(ledPin3, HIGH);
  delay(150); 
  digitalWrite(ledPin3, LOW);
  delay(100); 

  
  digitalWrite(ledPin1, HIGH);
  delay(150); 
  digitalWrite(ledPin1, LOW);
  delay(100); 

  digitalWrite(ledPin2, HIGH);
  delay(150); 
  digitalWrite(ledPin2, LOW);
  delay(100); 

  digitalWrite(ledPin3, HIGH);
  delay(150); 
  digitalWrite(ledPin3, LOW);
  delay(100); 

  
} 
