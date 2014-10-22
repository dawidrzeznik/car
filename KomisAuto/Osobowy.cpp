#include "Osobowy.h"



Osobowy::Osobowy(unsigned int id, string marka, string model, unsigned int cenaKup, unsigned int cenaSprz, unsigned int rok, unsigned short int drzwi, unsigned short int miejsca, string typ)
	: Samochod(id, marka, model, cenaKup, cenaSprz, rok, drzwi)
{
	this->miejsca=miejsca;
	this->typ=typ;
}


Osobowy::~Osobowy(void)
{
}

void Osobowy::pokazOpis()
{
	cout << "------------------" << endl;
	cout << "Id: " << id << endl; 
	cout << "Marka: " << marka << endl; 
	cout << "Model: " << model << endl; 
	cout << "Cena kupna: " << cenaKup << endl; 
	cout << "Cena sprzedazy: " << cenaSprz << endl; 
	cout << "Rocznik: " << rok << endl; 
	cout << "Ilosc drzwi: " << drzwi << endl; 
	cout << "Ilosc miejsc: " << miejsca << endl; 
	cout << "Typ nadwozia: " << typ << endl; 
	
}

unsigned short int Osobowy::getMiejsca()
{
	return miejsca;
}

string Osobowy::getTyp()
{
	return typ;
}