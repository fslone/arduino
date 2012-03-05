/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(0, OUTPUT);   
  pinMode(1, OUTPUT);  
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);    
}

void loop() {
  /*
  int i=random(0,4);
  int time=random(40,200);
  digitalWrite(i, HIGH);   // set the LED on
  delay(time);              // wait for a second
  digitalWrite(i, LOW);    // set the LED off
  
  */
  
  int x = random(5,10);
  x=x*6;
  while (x>0){
  digitalWrite(3,HIGH);
  delay(60);
  digitalWrite(3,LOW);
  delay(60);
  digitalWrite(1,HIGH);
  delay(60);
  digitalWrite(1,LOW);
  delay(60);
  digitalWrite(2,HIGH);
  delay(60);
  digitalWrite(2,LOW);
  delay(60);
  digitalWrite(0,HIGH);
  delay(60);
  digitalWrite(0,LOW);
  delay(60);
  x=x-1;
  };
  
  delay(50);
  
  x = random(5,10);
  x=x*6;
  while (x>0){
  digitalWrite(0,HIGH);
  delay(60);
  digitalWrite(0,LOW);
  delay(60);
  digitalWrite(2,HIGH);
  delay(60);
  digitalWrite(2,LOW);
  delay(60);
  digitalWrite(1,HIGH);
  delay(60);
  digitalWrite(1,LOW);
  delay(60);
  digitalWrite(3,HIGH);
  delay(60);
  digitalWrite(3,LOW);
  delay(60);
 
  
 
  x=x-1;
  }
  
  delay(50);
    
  x = random(5,10);
  x=x*5;
  while (x>0){
   digitalWrite(3,HIGH); 
   digitalWrite(1,HIGH);
   digitalWrite(2,HIGH);
   digitalWrite(0,HIGH);
   delay(80);
   digitalWrite(3,LOW); 
   digitalWrite(1,LOW);
   digitalWrite(2,LOW);
   digitalWrite(0,LOW);
   delay(80);
   x=x-1;
  }
  
  delay(50);
  
x = random(5,10);
x=x*70;
while (x>0){
    int i = random(0,4);
    int xtime = random(50,100);
    digitalWrite(i,HIGH);
    delay(xtime);
    digitalWrite(i,LOW);
    x=x-1;
  }

}
