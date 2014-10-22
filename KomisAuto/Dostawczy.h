#pragma once
#include "samochod.h"
#include <string>
#include <iostream>
using namespace std;
class Dostawczy :
	public Samochod
{
protected:
	float masa;
	float ladownosc;

public:
	Dostawczy(unsigned int id, string marka, string model, unsigned int cenaKup, unsigned int cenaSprz, unsigned int rok, unsigned short int drzwi, float masa, float ladownosc);
	~Dostawczy(void);

	void pokazOpis();
	float getMasa();
	float getLadownosc();
};

