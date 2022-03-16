#include <Arduino.h>

#include <Adafruit_NeoPixel.h>

#define PIN 15 //data pin


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(12, PIN, NEO_GRB + NEO_KHZ800); //12 led için

void setup()
{
pixels.begin(); 
}

void loop()
{

//i,j,k rgb değerleri için x de led sayısı için
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) {
for (int k = 0; k < 2; k++) {
for (int x = 0; x < 12; x++) {
pixels.setPixelColor(x, pixels.Color(i * 255, j * 255, k * 255)); 

pixels.show(); 
delay(50); 
}
}
}
}
}
