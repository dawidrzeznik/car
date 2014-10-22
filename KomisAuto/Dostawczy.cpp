#include "Dostawczy.h"



Dostawczy::Dostawczy(unsigned int id, string marka, string model, unsigned int cenaKup, unsigned int cenaSprz, unsigned int rok, unsigned short int drzwi, float masa, float ladownosc)
	: Samochod(id, marka, model, cenaKup, cenaSprz, rok, drzwi)
{
	this->masa=masa;
	this->ladownosc=ladownosc;
}


Dostawczy::~Dostawczy(void)
{
}

void Dostawczy::pokazOpis()
{
	cout << "------------------" << endl;
	cout << "Id: " << id << endl; 
	cout << "Marka: " << marka << endl; 
	cout << "Model: " << model << endl; 
	cout << "Cena kupna: " << cenaKup << endl; 
	cout << "Cena sprzedazy: " << cenaSprz << endl; 
	cout << "Rocznik: " << rok << endl; 
	cout << "Ilosc drzwi: " << drzwi << endl; 
	cout << "Dopuszczalna masa calkowita: " << masa << endl; 
	cout << "Ladownosc: " << ladownosc << endl;
}

float Dostawczy::getMasa()
{
	return masa;
}

float Dostawczy::getLadownosc()
{
	return ladownosc;
}