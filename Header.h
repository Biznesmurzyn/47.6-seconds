#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
//Klasy i metody
class Game
{
public:
	//wybory gracza
	int choice1,choice2,choice3;
	//prowiant
	float jedzenie, woda;
	//postacie
	bool Ted, Timmy, MaryJane, Dolores;
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
	//w grze
	void CoZdobyles();
};

//Funkcje
int wybor();