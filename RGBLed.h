#ifndef RGBLed_h
#define RGBLed_h

class RGBLed{

private:
	int _redLightPin;
	int _pinoVerde;
	int _pinoAzul;

public:
	RGBLed(int redLightPin, int pinoVerde, int pinoAzul);
	void acender(int vermelho, int verde, int azul);
	void acender(const unsigned int (&valores)[3]);
	void apagar();
	static const unsigned int MINIMO = 0;
	static const unsigned int MAXIMO = 255;
	static const unsigned int COR_VERMELHO[3];
	static const unsigned int COR_VERDE[3];
	static const unsigned int COR_AZUL[3];
	static const unsigned int COR_BRANCO[3];
	static const unsigned int COR_AMARELO[3];
	static const unsigned int COR_FUSCIA[3];
	static const unsigned int COR_LIMA[3];
	static const unsigned int COR_LARANJA[3];


};
#endif
