int led = 9; //sets the light to pin 9
int brightness = 0;  //the brightness of the LED
int fadeAmount = 4;  //amoung the LED fades
void setup() {
  pinMode(led, OUTPUT); //sets the led to an output
}

void loop() {
  analogWrite(led, brightness); //sets the brightness of the LED

  brightness = brightness + fadeAmount; //changes the brightness of the LED

  if (brightness  <= 0 || brightness >= 255) { //detects if LED is at max, min, or none
    fadeAmount = -fadeAmount; //changes the LED back to original brightness
  }
  delay(30); //waits before changing again
}
