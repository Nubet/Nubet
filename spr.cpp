#include <iostream>
#include <string>
#include <locale.h>
#include <cctype>

using namespace std;

void zad1(){
	cout << "Autorem programu jest Norbert Fila " << endl;
} 
void zad2(string imie){
	cout << "Podane imie: " << imie << endl;
} 
void zad3(string nazwisko){
	cout << "Podane nazwisko: " << nazwisko << endl;
}
int zad4(string imie){
	int dl_imienia = imie.length();
	string imie_autora = "Norbert";
	for(int i=0; i<dl_imienia-1; i++)
		if(tolower(imie[i]) != tolower(imie_autora[i]))
			{
				cout << "Imiona sa rozne! " << endl;
				return 0;
			}
	cout << "Imiona sa identyczne! " << endl;
}
void zad5(string imie, string nazwisko){
	int dl_imienia = imie.length();
	int dl_nazwiska = nazwisko.length();
	
	cout << "Imie sklada sie z: " << dl_imienia << " liter" << endl;
	cout << "Naziwsko sklada sie z: " << dl_nazwiska << " liter" << endl;
}
void zad6(string imie, string nazwisko){
	string dane = imie + " " + nazwisko;
	cout << "Imie i nazwisko: " << dane << endl;
}
void zad7(string imie, string nazwisko){
	char inicjaly[2];
	inicjaly[0] = toupper(imie[0]);
	inicjaly[1] = toupper(nazwisko[0]);
	cout << "Inicjaly twojego imienia: " << inicjaly[0] << "." << inicjaly[1] << endl;
}
void zad8(string imie){
	bool plec = false; // false - mezczyzna, true - kobieta
	if(tolower(imie[imie.length()-1]) == 'a')
		plec = true;
	else 
		plec = false;
		
	if(plec) // if plec == true	
		cout << "Podane imie jest imieniem damskim!" << endl;
	else 
		cout << "Podane imie jest imieniem meskim!" << endl;
		
}
void zad10(){
	string wyraz,szukane_dane;
	
	cout << "Podaj wyraz: ";
	cin.ignore();
	getline(cin, wyraz);
	cout << "Podaj wyraz ktory mam szukac: ";
	cin>>szukane_dane;
	int dl1 = wyraz.length();
	int dl2 = szukane_dane.length();
	int ile = 0;
	for(int i = 0; i < dl1-dl2;  i++)
	{
		int j;
		for(j = 0; j < dl2; j++)
			if(tolower(wyraz[i+j]) != tolower(szukane_dane[j]))
				break;
			if(j == dl2)
				ile++;
	}
	cout << "W wyrazie |" << wyraz << "| " << ile << " razy wystepuje " << szukane_dane << endl;
}
void zad11(){
	int ilosc_znakow = 0;
	string napis;
	char litera;
	
	cout << "Wprowadz zdanie ";
	cin.ignore();
	getline(cin, napis);
	cout << "Jakiego znaku chcesz szukac: ";
	cin>>litera;
		for(int i = 0; i <= napis.length()-1; i++){
			if(tolower(napis[i]) == tolower(litera)){
				ilosc_znakow++;
			}
	    }
	cout << "W podanym wyrazie: " << napis << " program znalazl " << ilosc_znakow << " literek " << litera << endl;
}
int main() {
	setlocale(LC_CTYPE, "Polish");
	string imie, nazwisko;
	int wybor;
	
	while(true)
	{
			cout << "Ktore zadanie chcesz wykonac: ";
			cin>>wybor;
			
			switch(wybor){
				case 1:
					zad1();
					break;
				case 2:
					cout << "Podaj imie: ";
					cin>>imie;
					zad2(imie);
					break;
				case 3:
					cout << "Podaj nazwisko: ";
					cin>>nazwisko;
					zad3(nazwisko);
					break;
				case 4:
					cout << "Podaj imie: ";
					cin>>imie;
					zad4(imie);
					break;
				case 5:
					cout << "Podaj imie: ";
					cin>>imie;
					cout << "Podaj nazwisko: ";
					cin>>nazwisko;
					zad5(imie, nazwisko);
					break;
				case 6:
					cout << "Podaj imie: ";
					cin>>imie;
					cout << "Podaj nazwisko: ";
					cin>>nazwisko;
					zad6(imie, nazwisko);
					break;
				case 7:
					cout << "Podaj imie: ";
					cin>>imie;
					cout << "Podaj nazwisko: ";
					cin>>nazwisko;
					zad7(imie, nazwisko);
					break;
				case 8:
					cout << "Podaj imie: ";
					cin>>imie;
					zad8(imie);
					break;
				case 9:
					cout << "Podaj imie: ";
					cin>>imie;
					cout << "Podaj nazwisko: ";
					cin>>nazwisko;
					cout << "========================================" << endl;
					zad2(imie);
					zad3(nazwisko);
					zad7(imie, nazwisko);
					zad8(imie);
					cout << "========================================" << endl;
					break;
				case 10:
					zad10();
					break;
				case 11:
					zad11();
					break;
				default:
					cout << "Wprowadziles bledne dane! " << endl;
					break;
				}
	}

	
	
}
