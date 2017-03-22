#include <iostream>
#include <windows.h>
#include <time.h>
#include <string>
using namespace std;
//Klasy i metody
class Postac
{
public:
	string imie;
	int plec;
	bool zyje;
	bool J, W, A;
	bool wyprawa;
	int glod;
	int woda;
	float zmeczenie;
	float stanumyslu;
	string GlodOpis;
	string WodaOpis;
	bool chory, ranny, szalony, zmeczony;
	Postac(bool przezyl, string nazwa)
	{
		if (przezyl)
		{
			imie = nazwa;
			J = false;
			W = false;
			A = false;
			zyje = true;
			wyprawa = false;
			glod = 8;
			woda = 8;
			zmeczenie = 100;
			stanumyslu = 100;
			GlodOpis = "Swiezo po wybuchu";
			WodaOpis = "  ";
			chory = false;
			ranny = false;
			szalony = false;
			zmeczony = false;
		}
		else
		{
			imie = nazwa;
			J = false;
			W = false;
			A = false;
			zyje = false;
			wyprawa = false;
			glod = 8;
			woda = 8;
			zmeczenie = 100;
			stanumyslu = 100;
			GlodOpis = "Swiezo po wybuchu";
			WodaOpis = "  ";
			chory = false;
			ranny = false;
			szalony = false;
			zmeczony = false;
		}
	}
};
class Game
{
public:
	//Ogolne
	int dzien;
	//wybory gracza
	int choice1,choice2,choice3;
	//prowiant
	float jedzenie, woda;
	//postacie
	bool Ted, Dolores, MaryJane, Timmy;
	//rozrywka
	bool karty, warcaby;
	//przetrwanie
	bool radio, poradnik, mapa;
	//leki
	bool apteczka, spray;
	//obrona
	bool karabin, siekiera, klodka;
	//opcje
	bool koniec;
	
	//poza gr¹
	void Menu();
	void Start();
	void Options();
	void PrzypiszWartosci();
	void CoZdobyles();
	//w grze
	void Gra(Postac &Ted, Postac& Dolores, Postac &Timmy, Postac &);
	void StanRodziny(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane);
	void OpisDnia(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane);
	void Przydziel(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane);
	void Przydzielzywnosc(Postac &postac);
	void Przydzielleki(Postac &postac);
	void Aktualizacja(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane);
	void Stan(Postac &postac);
	void Koniec(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane);
	void Event(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane);
};
//Funkcje
int wybor();