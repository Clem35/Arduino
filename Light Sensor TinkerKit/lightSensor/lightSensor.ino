#include <TinkerKit.h> 
//create the "ldr" object on port I0
TKLightSensor ldr(I0);  
    
 
void setup() {
  // initialize serial communications at 9600 bps
  Serial.begin(9600);
}
 
void loop() {
  // store the ldr values into a variable called brightnessVal
  int brightnessVal = ldr.read();            
 
  
   
  //to have it at full brightness
  //when it's dark, uncomment this line:
  //led.brightness(1023 - brightnessVal);
 
  // print the results to the serial monitor:
  Serial.print("brightness = " );                      
  Serial.println(brightnessVal);      
 
 
  // wait 10 milliseconds before the next loop
  delay(1000);                    
}

