#include <iostream>
#include <string>
#include <locale.h>
#include <cctype>

using namespace std;

string dane;

void zad1(string imie_autora){
	cout << "Autorem programu jest: " << imie_autora << endl;
}
void zad2(string imie){
	cout << "Twoje imie to: " << imie << endl;
}
void zad3(string nazwisko){
	cout << "Twoje nazwisko to: " << nazwisko << endl;
}
bool zad4(string imie, string imie_autora){
	
	bool identyczne = false;
	int dl_imie = imie.length();
	int dl_imie_autora = imie_autora.length();
	
	if (dl_imie != dl_imie_autora)
		for(int i =0; i < dl_imie; i++)
			if(tolower(imie[i]) != tolower(imie_autora[i]))
				return identyczne = false;
			
			
	return identyczne = true;
	
}
void zad5(string imie, string nazwisko){
	
	int dl_imie = imie.length();
	int dl_nazwisko = nazwisko.length();
	cout << "Dlugosc imienia: " << imie.length() << endl;
	cout << "Dlugosc nazwiska: " << nazwisko.length() << endl;
	
}
void zad6(string imie, string nazwisko){
	
	dane = imie + " " + nazwisko;
	cout << "Dane: " << dane << endl;
	
}
void zad7(string imie, string nazwisko){
	char inicjaly[2];
	inicjaly[0] = imie[0];
	inicjaly[1] = nazwisko[0];
	cout << "Twoje inicjaly: " << inicjaly[0] << "." << inicjaly[1] << endl;
}
void zad8(string imie){
	bool plec = false; // mezczyzna
	if (tolower(imie[imie.length()-1]) == 'a')
		plec = true; // kobieta
	else 
		plec = false;
	
	if(plec)
    	cout << imie << " to damskie imie!" << endl;
	else 

		cout << imie << " to meskie imie!" << endl;
	
}
void zad10(){

	string szukany_wyraz;
	cout << "Podaj szukany znak/wyraz: ";
	cin>>szukany_wyraz;
	
	int dl1 = dane.length();
	int dl2 =  szukany_wyraz.length();
	int ile = 0;
	
	for(int i=0; i<dl1-dl2+1; i++)
	{
		int j=0;
		for(j = 0; j < dl2; j++)
			if(toupper(dane[i+j]) != toupper(szukany_wyraz[j]))
				break;
		
		
		if (j == dl2)
			ile++;
			
	}
	cout << "Szukany wzorzec: " << szukany_wyraz << " wystepuje " << ile << " razy! " << "w zmiennej Dane: " << dane <<  endl;
	
}
void zad11(){
	char szukany_znak;
	string wyraz;
	
	cout << "Podaj zdanie w ktorym bede szukac znakow: ";
	cin.ignore();
	getline(cin, wyraz);
	cout << "Podaj znak ktory mam szukac: ";
	cin>>szukany_znak;
	
	int ile=0;
	for(int i=0; i<wyraz.length(); i++){
			if(toupper(wyraz[i]) == toupper(szukany_znak))
				ile++;
	}
	cout << "Znak: " << szukany_znak << " w podanym zdaniu |" << wyraz << "|" << " wystepuje " << ile << " razy! " << endl;
	
	
}
int main(){
	setlocale(LC_CTYPE, "Polish");
	string imie, nazwisko;
	string imie_autora = "Norbert";
	int zadanie;
	
	while(true)
	{
		cout << "Podaj numer zadania ktore chcesz wykonac [1-11]: ";
		cin>>zadanie;
		switch(zadanie)
		{
			case 1:
				zad1(imie_autora);
				break;
			case 2:
				cout << "Podaj imie: ";
				cin>>imie;
				zad2(imie);
				break;
			case 3:
				cout << "Podaj Nazwisko: ";
				cin>>nazwisko;
				zad3(nazwisko);
				break;
			case 4:
				cout << "Podaj Imie: ";
				cin>>imie;
				if(zad4(imie, imie_autora))
					cout << "Imiona identyczne! " << endl;
				else 
					cout << "Imiona sa rozne " << endl;
			
				break;
				
			case 5:
				cout << "Podaj Imie: ";
				cin>>imie;
				cout << "Podaj Nazwisko: ";
				cin>>nazwisko;
				zad5(imie, nazwisko);
				break;
			case 6:
				cout << "Podaj Imie: ";
				cin>>imie;
				cout << "Podaj Nazwisko: ";
				cin>>nazwisko;
				zad6(imie, nazwisko);
				break;
			case 7:
				cout << "Podaj Imie: ";
				cin>>imie;
				cout << "Podaj Nazwisko: ";
				cin>>nazwisko;
				zad7(imie, nazwisko);
				break;
			case 8:
				cout << "Podaj Imie: ";
				cin>>imie;
				zad8(imie);
				break;
			case 9:
				cout << "Podaj Imie: ";
				cin>>imie;
				cout << "Podaj Nazwisko: ";
				cout << "========================================" << endl;
				cin>>nazwisko;
				zad2(imie);
				zad3(nazwisko);
				zad7(imie, nazwisko);
				zad8(imie);
				cout << "========================================" << endl;
				break;
			case 10:
				//Zmienianie wartosci zmiennej Dane
				cout << "Podaj Imie: ";
				cin>>imie;
				cout << "Podaj Nazwisko: ";
				cin>>nazwisko;
				zad6(imie, nazwisko);
				//
				zad10();
				break;
			case 11:
				zad11();
				break;
			default:
				cout << "Bledne dane! " <<endl;
				break;
		}
	}
	
}
