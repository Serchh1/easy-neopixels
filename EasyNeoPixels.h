
/*
  EasyNeoPixels.h - Library for making neopixels more approachable.
  Created by Evelyn Masso, April 9, 2017.
*/

#pragma once

#include "Arduino.h"
#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel easyNeoPixels;

void setupEasyNeoPixels(int pin, int num) 
{
  easyNeoPixels = Adafruit_NeoPixel(num, pin, NEO_GRB + NEO_KHZ800);
  easyNeoPixels.begin();
}

// set the nth neopixel to a particular brightness of white
// meant to be used with val as HIGH or LOW
void writeEasyNeoPixel(int num, int val) 
{
  easyNeoPixels.setPixelColor(num, easyNeoPixels.Color(val*255,val*255,val*255));
  easyNeoPixels.show();
}

// set the nth neopixel to a particular rgb color
void writeEasyNeoPixel(int num, int r, int g, int b) 
{
  easyNeoPixels.setPixelColor(num, easyNeoPixels.Color(r,g,b));
  easyNeoPixels.show();
}

// turn off all the pixel on the strip
void offEasyNeoPixel()
{ 
  for (int i = 0; i < easyNeoPixels.numPixels(); i++) 
  {
    easyNeoPixels.setPixelColor(i, easyNeoPixels.Color(0, 0, 0));
  }
  easyNeoPixels.show();
}

void onEasyNeoPixel()
{
  for (int i = 0; i < easyNeoPixels.numPixels(); i++)
  {
    onEasyNeoPixel.setPixelColor(i, easyNeoPixels.Color(255,255,255));
  }
  easyNeoPixels.show();
}