#include "RGBLed.h"

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#endif

const unsigned int RGBLed::WHITE[3] = {MAX, MAX, MAX};
const unsigned int RGBLed::RED[3] = {MAX, MIN, MIN};
const unsigned int RGBLed::GREEN[3] = {MIN, MAX, MIN};
const unsigned int RGBLed::BLUE[3] = {MIN, MIN, MAX};
const unsigned int RGBLed::YELLOW[3] = {MAX, MAX, MIN};
const unsigned int RGBLed::FUSCIA[3] = {MAX, MIN, MAX};
const unsigned int RGBLed::LIME[3] = {MIN, MAX, MAX};
const unsigned int RGBLed::ORANGE[3] = {MAX, 165, MIN};

RGBLed::RGBLed(int redLightPin, int greenPin, int bluePin){
	_redLightPin = redLightPin;
	_greenLightPin = greenPin;
	_blueLightPin = bluePin;
	pinMode(_redLightPin, OUTPUT);
	pinMode(_greenLightPin, OUTPUT);
	pinMode(_blueLightPin, OUTPUT);
}

void RGBLed::light(int red, int green, int blue){
	analogWrite(_redLightPin, red);
	analogWrite(_greenLightPin, green);
	analogWrite(_blueLightPin, blue);
}

void RGBLed::light(const unsigned int (&values)[3]){
	light(values[0], values[1], values[2]);
}

void RGBLed::putOut(){
	analogWrite(_redLightPin, MIN);
	analogWrite(_greenLightPin, MIN);
	analogWrite(_blueLightPin, MIN);
}
