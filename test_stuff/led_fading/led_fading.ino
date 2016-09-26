/*
 Fade

 This example shows how to fade an LED on pin 9
 using the analogWrite() function.

 The analogWrite() function uses PWM, so if
 you want to change the pin you're using, be
 sure to use another PWM capable pin. On most
 Arduino, the PWM pins are identified with 
 a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

 This example code is in the public domain.
 */

int led0 = 3;           // the PWM pin the LED is attached to
int led1 = 5;
int led2 = 6;
int led3 = 9;
int led4 = 10;
int brightness = 0;    // how bright the LED is
int fadeAmount = 1;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led0, brightness);
  analogWrite(led1, brightness);
  analogWrite(led2, brightness);
  analogWrite(led3, brightness);
  analogWrite(led4, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(20);
}
