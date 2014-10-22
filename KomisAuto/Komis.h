#pragma once
#include <string>
//#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <typeinfo>
#include <algorithm>
#include <string>
#include "Osobowy.h"
#include "Dostawczy.h"
using namespace std;
class Komis
{
private:
	void showMenu();
	/*void kupAuto();*/
	void kupOsobowe();
	/*void kupDostawcze();*/
	void sprzedajAuto();
	/*void sortCena();
	void sortMarka()*/;
	void szukajCena();
	void szukajMarka();
	void pokazAuta();
	void wczytaj();
	void zapisz();
	
	unsigned int liczId;
	vector <Samochod*> auta;
	static const string plik;
public:
	Komis(void);
	~Komis(void);

	void run();
};

