#pragma once
#include "samochod.h"
#include <iostream>
#include <string>
using namespace std;
class Osobowy :
	public Samochod
{
private:
	unsigned short int miejsca;
	string typ;

public:
	Osobowy(unsigned int id, string marka, string model, unsigned int cenaKup, unsigned int cenaSprz, unsigned int rok, unsigned short int drzwi, unsigned short int miejsca, string typ);
	~Osobowy(void);

	void pokazOpis();
	unsigned short int getMiejsca();
	string getTyp();
};

