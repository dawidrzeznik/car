#include "Samochod.h"


Samochod::Samochod(unsigned int id, string marka, string model, unsigned int cenaKup, unsigned int cenaSprz, unsigned int rok, unsigned short int drzwi)
{
	this->id=id;
	this->marka=marka;
	this->model=model;
	this->cenaKup=cenaKup;
	this->cenaSprz=cenaKup;
	this->rok=rok;
	this->drzwi=drzwi;
}


Samochod::~Samochod(void)
{
}

void Samochod::pokazOpis()
{
	cout << "------------------" << endl;
	cout << "Id: " << id << endl; 
	cout << "Marka: " << marka << endl; 
	cout << "Model: " << model << endl; 
	cout << "Cena kupna: " << cenaKup << endl; 
	cout << "Cena sprzedazy: " << cenaSprz << endl; 
	cout << "Rocznik: " << rok << endl; 
	cout << "Ilosc drzwi: " << drzwi << endl; 
	
}

unsigned int Samochod::getId()
{
	return id;
}
string Samochod::getMarka()
{
	return marka;
}
string Samochod::getModel()
{
	return model;
}

unsigned int Samochod::getCenaKup()
{
	return cenaKup;
}
unsigned int Samochod::getCenaSprz()
{
	return cenaSprz;
}
unsigned int Samochod::getRok()
{
	return rok;
}
unsigned short int Samochod::getDrzwi()
{
	return drzwi;
}