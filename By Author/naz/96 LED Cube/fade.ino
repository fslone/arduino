int brightness = 255;    // how bright the LED is
int fadeAmount = 3;    // how many points to fade the LED by

void setup()  { 
  // declare pin 9 to be an output:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
} 

void loop()  { 
  // set the brightness of pin 9:
  analogWrite(3, brightness);
  analogWrite(5, brightness);
  analogWrite(6, brightness);  
  analogWrite(11, brightness);


 /*

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
    if (brightness==0) {
      
      //have to keep the brightness here same 
      //as below to keep effect even
      delay(70);
      analogWrite(3, 0);
      analogWrite(5, 0);
      analogWrite(6, 0);  
      analogWrite(11,0);
         
      //time that it waits after going dim 
      //before coming back on   
      delay(1500);
     }
  }     
  
  // wait for 7- milliseconds to see the dimming effect    
  delay(70);
  
  */
   
}
