#include "RGBLed.h"

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#endif

const unsigned int RGBLed::COR_BRANCO[3] = {MAXIMO, MAXIMO, MAXIMO};

const unsigned int RGBLed::COR_VERMELHO[3] = {MAXIMO, MINIMO, MINIMO};
const unsigned int RGBLed::COR_VERDE[3] = {MINIMO, MAXIMO, MINIMO};
const unsigned int RGBLed::COR_AZUL[3] = {MINIMO, MINIMO, MAXIMO};

const unsigned int RGBLed::COR_AMARELO[3] = {MAXIMO, MAXIMO, MINIMO};
const unsigned int RGBLed::COR_FUSCIA[3] = {MAXIMO, MINIMO, MAXIMO};
const unsigned int RGBLed::COR_LIMA[3] = {MINIMO, MAXIMO, MAXIMO};

const unsigned int RGBLed::COR_LARANJA[3] = {MAXIMO, 165, MINIMO};

RGBLed::RGBLed(int pinoVermelho, int pinoVerde, int pinoAzul){
	_pinoVermelho = pinoVermelho;
	_pinoVerde = pinoVerde;
	_pinoAzul = pinoAzul;
	pinMode(_pinoVermelho, OUTPUT);
	pinMode(_pinoVerde, OUTPUT);
	pinMode(_pinoAzul, OUTPUT);
}

/**
 * Acende o LED informando os valores de cada cor
 */
void RGBLed::acender(int vermelho, int verde, int azul){
	analogWrite(_pinoVermelho, vermelho);
	analogWrite(_pinoVerde, verde);
	analogWrite(_pinoAzul, azul);
}

void RGBLed::acender(const unsigned int (&valores)[3]){
	acender(valores[0], valores[1], valores[2]);
}



void RGBLed::apagar(){
	analogWrite(_pinoVermelho, MINIMO);
	analogWrite(_pinoVerde, MINIMO);
	analogWrite(_pinoAzul, MINIMO);
}