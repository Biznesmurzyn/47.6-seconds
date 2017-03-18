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
	bool zyje;
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
			zyje = true;
			wyprawa = false;
			glod = 8;
			woda = 8;
			zmeczenie = 100;
			stanumyslu = 100;
			GlodOpis = "Pelny/a";
			WodaOpis = "Napojony/a";
			chory = false;
			ranny = false;
			szalony = false;
			zmeczony = false;
		}
		else
		{
			imie = nazwa;
			zyje = false;
			wyprawa = false;
			glod = 8;
			woda = 8;
			zmeczenie = 100;
			stanumyslu = 100;
			GlodOpis = "Pelny/a";
			WodaOpis = "Napojony/a";
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
	bool TedJ, TedW, TimmyJ, TimmyW, DoloresJ, DoloresW, MaryJaneJ, MaryJaneW;
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
	void Aktualizacja(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane);
	void Event(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane);
};
//Funkcje
int wybor();