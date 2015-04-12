// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      8

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 250; // delay for half a second

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code
  pixels.begin(); // This initializes the NeoPixel library.
}

int red = 0;
int green = 0;
int blue = 0;
int thedelay = 2000;

// this loop is infinite 
// Here is a web for a color picker : http://www.w3schools.com/tags/ref_colorpicker.asp
void loop() {
   pixels.setPixelColor(0, pixels.Color(0,0,255)); 
   pixels.setPixelColor(1, pixels.Color(0,0,255)); 
   pixels.setPixelColor(2, pixels.Color(0,0,255)); 
   pixels.setPixelColor(3, pixels.Color(0,0,255)); 
   pixels.setPixelColor(4, pixels.Color(0,0,255)); 
   pixels.setPixelColor(5, pixels.Color(0,0,255)); 
   pixels.setPixelColor(6, pixels.Color(0,0,255));     
   pixels.setPixelColor(7, pixels.Color(0,0,255)); 
   pixels.show(); // This sends the updated pixel color to the hardware.
   
   delay(thedelay);
   
    pixels.setPixelColor(0, pixels.Color(0,0,0)); 
   pixels.setPixelColor(1, pixels.Color(0,0,0)); 
   pixels.setPixelColor(2, pixels.Color(0,0,0)); 
   pixels.setPixelColor(3, pixels.Color(0,0,0)); 
   pixels.setPixelColor(4, pixels.Color(0,0,0)); 
   pixels.setPixelColor(5, pixels.Color(0,0,0)); 
   pixels.setPixelColor(6, pixels.Color(0,0,0));     
   pixels.setPixelColor(7, pixels.Color(0,0,0)); 
   pixels.show(); // This sends the updated pixel color to the hardware.
   
    delay(thedelay);
}
