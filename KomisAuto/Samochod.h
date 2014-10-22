#pragma once
#include <string>
#include <iostream>
using namespace std;

class Samochod
{
protected:
	unsigned int id;
	string marka;
	string model;
	unsigned int cenaKup;
	unsigned int cenaSprz;
	unsigned int rok;
	unsigned short int drzwi;


public:
	Samochod(unsigned int id, string marka, string model, unsigned int cenaKup, unsigned int cenaSprz, unsigned int rok, unsigned short int drzwi);	
	 ~Samochod(void);

	void pokazOpis();
	unsigned int getId();
	string getMarka();
	string getModel();
	unsigned int getCenaKup();
	unsigned int getCenaSprz();
	unsigned int getRok();
	unsigned short int getDrzwi();
};


