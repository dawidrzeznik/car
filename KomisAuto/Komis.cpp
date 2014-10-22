#include "Komis.h"

const string Komis::plik = "plik.txt";

void Komis::showMenu()
{
	cout<<"*******************KOMIS*********************"<<endl;
	cout<<"1	Kup samochod"<<endl;
	cout<<"2	Sprzedaj samochod"<<endl;
	cout<<"3	Wyszukaj po marce"<<endl;
	cout<<"4	Wyszukaj po cenie"<<endl;
	cout<<"5	Pokaz auta"<<endl;
	cout<<"6	Wczytaj auta"<<endl;
	cout<<"7	Zapisz auta"<<endl;

	cout<<"e		Wyjscie"<<endl<<endl;

}


//void Komis::kupAuto()
//{
//	cout<<"*************KUPNO***************"<<endl;
//	cout << "1 - osobowy" << endl;
//	cout << "2 - dostawczy" << endl;
//
//	char znak;
//	cin >> znak;
//	switch (znak)
//	{
//	case '1':
//		kupOsobowe();
//		break;
//	case '2':
//		kupDostawcze();
//		break;
//	}
//}

void Komis::kupOsobowe()
{
	cout << "Podaj marke" << endl;
	string marka;
	cin >> marka;

	cout << "Podaj model" << endl;
	string model;
	cin >> model;

	cout << "Podaj cene kupna" << endl;
	unsigned int cenaKup;
	cin >> cenaKup;
	while (cin.fail() || cenaKup <=0 || cenaKup >2000000)
	{	
		cin.clear();
		cin.sync();
		cout << "Zle dane wpisz ponowanie" << endl;
		cin >> cenaKup;
	}
	
	cout << "Podaj cene sprzedazy" << endl;
	unsigned int cenaSprz;
	cin >> cenaSprz;
	while (cin.fail() || cenaSprz <=0 || cenaSprz >2000000)
	{	
		cin.clear();
		cin.sync();
		cout << "Zle dane wpisz ponowanie" << endl;
		cin >> cenaSprz;
	}

	cout << "Podaj rocznik" << endl;
	unsigned short int rok;
	cin >> rok;
	while (cin.fail() || rok <=1970 || rok >2014)
	{	
		cin.clear();
		cin.sync();
		cout << "Zle dane wpisz ponowanie" << endl;
		cin >> rok;
	}

	cout << "Podaj ilosc drzwi" << endl;
	unsigned int drzwi;
	cin >> drzwi;
	while (cin.fail() || drzwi <=0 || drzwi >10)
	{	
		cin.clear();
		cin.sync();
		cout << "Zle dane wpisz ponowanie" << endl;
		cin >> drzwi;
	}
	
	Samochod* osobowe = new Samochod(liczId++, marka, model, cenaKup, cenaSprz, rok, drzwi);
	auta.push_back(osobowe);
}

//void Komis::kupDostawcze()
//{
//	cout << "Podaj marke" << endl;
//	string marka;
//	cin >> marka;
//
//	cout << "Podaj model" << endl;
//	string model;
//	cin >> model;
//
//	cout << "Podaj cene kupna" << endl;
//	unsigned int cenaKup;
//	cin >> cenaKup;
//
//	cout << "Podaj cene sprzedazy" << endl;
//	unsigned int cenaSprz;
//	cin >> cenaSprz;
//	/*while (cenaSprz<1 || cenaSprz>2000000);
//	{
//		cout << "Cena sprzedazy z zakresu 1-2 000 000" << endl;
//		cout << "Podaj cene sprzedazy" << endl;
//		cin >> cenaSprz;
//	}*/
//
//	cout << "Podaj rocznik" << endl;
//	unsigned short int rok;
//	cin >> rok;
//	/*while (rok<1970 || rok>2014);
//	{
//		cout << "Rocznik z zakresu 1970-2014 !" << endl;
//		cout << "Podaj rocznik" << endl;
//		cin >> rok;
//	}*/
//
//	cout << "Podaj ilosc drzwi" << endl;
//	unsigned int drzwi;
//	cin >> drzwi;
//	/*while (drzwi<1 && drzwi>10);
//	{
//		cout << "Niepoprawne dane" << endl;
//		cout << "Podaj ilosc drzwi" << endl;
//		cin >> drzwi;
//	}*/
//
//	cout << "Podaj dopuszczala mase calkowita (t)" << endl;
//	float masa;
//	cin >> masa;
//	while (cin.fail() || masa <=0)
//	{	
//		cin.clear();
//		cin.sync();
//		cout << "Zle dane wpisz ponowanie";
//		cin >> cenaKup;
//	}
//	
//	cout << "Podaj ladownosc (kg)" << endl;
//	float ladownosc;
//	cin >> ladownosc;
//	/*while (ladownosc<1 && ladownosc>100000);
//	{
//		cout << "Niepoprawne dane" << endl;
//		cout << "Podaj ladownosc" << endl;
//		cin >> ladownosc;
//	}*/
//
//	Samochod* dostawcze = new Dostawczy(liczId++, marka, model, cenaKup, cenaSprz, rok, drzwi, masa, ladownosc);
//	auta.push_back(dostawcze);
//}

void Komis::sprzedajAuto()
{
	unsigned int id;
	cout << "Podaj id auta do sprzedazy" << endl;
	cin >> id;

	for (unsigned int i = 0; i < auta.size(); ++i)
	{
		if (auta[i]->getId() == id)
		{
			/*cout << "Sprzedales " << auta[i]->getMarka() << " " << auta[i]->getModel() << endl;
			if (auta[i]->getCenaSprz()>auta[i]->getCenaKup())
				cout << "Zarobiles " << auta[i]->getCenaSprz()-auta[i]->getCenaKup() << endl;
			else if (auta[i]->getCenaSprz()>auta[i]->getCenaKup())
				cout << "Wyszedles na zero " << endl;
			else 
				cout << "Straciles " << auta[i]->getCenaSprz()-auta[i]->getCenaKup() << endl;*/

			/*int bilans = 0;
			bilans = auta[i]->getCenaSprz() - auta[i]->getCenaKup();*/
			cout << "Sprzedales " << auta[i]->getMarka() << " " << auta[i]->getModel() << endl;
			delete auta[i];
			auta.erase(auta.begin() + i);
			return;
		}
	}
	
	cout << "Nie ma auta o podanym id" << endl;
}
//void Komis::sortCena()
//{
//	cout << "Auta posortowanie wedlug ceny" << endl;
//	//for (unsigned int i = 0; i < auta.size(); ++i)
//	
//		//cout << auta[i];
//		
//		//cout <<	auta.max_size(); << endl;
//		//auta[i]->pokazOpis();
//	
//	
//}
//
//void Komis::sortMarka()
//{
//	cout << "Sortowanie po marce" << endl;
//}

void Komis::szukajCena()
{
	unsigned int cena1,cena2;
	unsigned int ileAut = 0;
	cout << "Podaj dolny zakres ceny" << endl;
	cin >> cena1;
	while (cin.fail() || cena1 <=0 || cena1 >2000000)
	{	
		cin.clear();
		cin.sync();
		cout << "Zle dane wpisz ponownie" << endl;
		cin >> cena1;
	}

	cout << "Podaj gorny zakres ceny" << endl;
	cin >> cena2;
	while (cin.fail() || cena1 <=0 || cena1 >2000000)
	{	
		cin.clear();
		cin.sync();
		cout << "Zle dane wpisz ponownie" << endl;
		cin >> cena2;
	}

	cout << "Samochody w przedziale od " << cena1 << " do " << cena2 << endl;
	for (unsigned int i = 0; i < auta.size(); ++i)
	{
		//cout << auta[i];
		
		if (auta[i]->getCenaSprz()>=cena1 && auta[i]->getCenaSprz()<=cena2)
			auta[i]->pokazOpis();
		else
			ileAut++;		
		//cout << auta[i]->getModel() << auta[i]->getCenaSprz() << endl;					
	}
	if (ileAut == auta.size())
		cout << "Nie ma samochodow w podanym przedziale cenowym" << endl;
}

void Komis::szukajMarka()
{
	string szukanaMarka;
	unsigned int ileAut = 0;
	cout << "Podaj marke" << endl;
	cin >> szukanaMarka;

	cout << "Samochody marki " << szukanaMarka << endl;
	for (unsigned int i = 0; i < auta.size(); ++i)
	{
		//cout << auta[i];
		
		if (auta[i]->getMarka()>=szukanaMarka)
			auta[i]->pokazOpis();
		else
			ileAut++;							
	}
	if (ileAut == auta.size())
		cout << "Nie ma samochodow w podanym przedziale cenowym" << endl;

}
void Komis::pokazAuta()
{
	for (unsigned int i = 0; i < auta.size(); ++i)
	{
		//cout << auta[i];
		auta[i]->pokazOpis();
	}
}


void Komis::wczytaj()
{
	fstream file;
	file.open(plik, ios::in);

	while (!file.eof())
	{
		string marka;
		file >> marka;

		string model;
		file >> model;

		unsigned int cenaKup;
		file >> cenaKup;

		unsigned int cenaSprz;
		file >> cenaSprz;

		unsigned short int rok;
		file >> rok;

		unsigned int drzwi;
		file >> drzwi;

		Samochod* osobowe = new Samochod(liczId++, marka, model, cenaKup, cenaSprz, rok, drzwi);
	    auta.push_back(osobowe);
	}
		
}

void Komis::zapisz()
{
	fstream file;
	file.open(plik, ios::out);
	for (unsigned int i = 0; i < auta.size(); ++i)
	{
		Samochod* osobowy = dynamic_cast<Samochod*> (auta[i]);
		
		file << osobowy->getMarka() << " ";				
		file << osobowy->getModel() << " ";
		file << osobowy->getCenaKup() << " ";
		file << osobowy->getCenaSprz() << " ";
		file << osobowy->getRok() << " ";
		file << osobowy->getDrzwi() << " ";
		file << endl;//endl na koniec
	}
}

Komis::Komis(void)
{
	liczId=1;
}



Komis::~Komis(void)
{
	for (unsigned int i = 0; i < auta.size(); ++i)
	{
		delete auta[i];
	}
}

void Komis::run()
{
	char znak;

	do
	{
		//wczytaj();
		showMenu();
		cin >> znak;
		switch (znak)
		{
		case '1':
			kupOsobowe();
			break;
		case '2':
			sprzedajAuto();
			break;
		case '3':
			szukajMarka();
			break;
		case '4':
			szukajCena();
			break;
		case '5':
			pokazAuta();
			break;
		case '6':
			wczytaj();
			break;
		case '7':
			zapisz();
			break;
		
		case 'e':
			break;
		default:
			cout << "Podales zly znak!" << endl;
		}
	}
	while (znak!='e');
	//zapisz();
	system("Pause");
}