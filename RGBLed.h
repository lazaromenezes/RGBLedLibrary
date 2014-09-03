#ifndef RGBLed_h
#define RGBLed_h

class RGBLed{

private:
	int _redLightPin;
	int _greenLightPin;
	int _blueLightPin;

public:
	RGBLed(int redLightPin, int greenLightPin, int blueLightPin);
	void light(int red, int green, int blue);
	void light(const unsigned int (&values)[3]);
	void putOut();
	static const unsigned int MIN = 0;
	static const unsigned int MAX = 255;
	static const unsigned int RED[3];
	static const unsigned int GREEN[3];
	static const unsigned int BLUE[3];
	static const unsigned int WHITE[3];
	static const unsigned int YELLOW[3];
	static const unsigned int FUSCIA[3];
	static const unsigned int LIME[3];
	static const unsigned int ORANGE[3];
};
#endif
