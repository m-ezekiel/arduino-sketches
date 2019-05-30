/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/

int led1 = 9;           // the PWM pin the LED is attached to
int led2 = 11;
int brightness1 = 120;    // how bright the LED is
int brightness2 = 120;    // how bright the LED is
int fadeAmount = 2;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600);  
  // declare pin 9 to be an output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led1, brightness1);
  analogWrite(led2, brightness2);

  // change the brightness for next time through the loop:
  brightness1 = brightness1 + fadeAmount;
  brightness2 = brightness2 - fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness1 <= 0 || brightness1 >= 255 || brightness2 <= 0 || brightness2 >= 255) {
    fadeAmount = -fadeAmount;
  }
  Serial.println(brightness1);
  Serial.println(brightness2);
  // wait for 30 milliseconds to see the dimming effect
  delay(10);
}
