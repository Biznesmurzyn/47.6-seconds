#include <iostream>
#include <windows.h>
#include <time.h>
#include <string>
#include "stdafx.h"
#include "Header.h"
using namespace std;

void Game::Menu()
{
	while (true)
	{
		system("cls");
		int choice;
		cout << "60 Seconds !" << endl << endl;
		cout << "1. Start" << endl;
		cout << "2. Opcje" << endl;
		cout << "3. Tworcy" << endl;
		cout << "4. Wyjscie" << endl;
		bool t = false;
		while (t==false)
		{
			choice = wybor();
			if (choice < 1 || choice > 4)
			{
				cout << "Blad" << endl;
			}
			else
			{
				t = true;
			}
		}
		switch (choice)
		{
		case 1:
		{
			system("cls");
			return;
			break;
		}
		case 2:
		{
			Options();
			break;
		}
		case 3:
		{
			system("cls");
			cout << " By biznes the murzyn";
			Sleep(3000);
			break;
		}
		case 4:
		{
			exit(0);
			break;
		}
		}
	}
}
void Game::Start()
{
	system("cls");
	cout << "O nie ! Za minute wybuchnie bomba !";
	Sleep(2000);
	system("cls");
	cout << "To ten moment, gdy musisz zdecydowac - co dla ciebie jest najwazniejsze";
	Sleep(3000);
	system("cls");
	cout << "..." << endl << endl;
	cout << "Jedzenie (1)" << endl;
	cout << "Woda (2)" << endl;
	choice1 = wybor();
	Sleep(500);
	cout << "..." << endl << endl;
	cout << "Rodzina (1)" << endl;
	cout << "Przetrwanie (2)" << endl;
	choice2 = wybor();
	Sleep(500);
	cout << "..." << endl << endl;
	cout << "Bron (1)" << endl;
	cout << "Leki (2)" << endl;
	choice3 = wybor();
	Sleep(500);
	cout << "Jebs";
	Sleep(1000);
	system("cls");
	CoZdobyles();

	cout << "Walnela atomica, udalo ci sie zebrac " << woda << " butelek wody oraz " << jedzenie << " puszek zupy."<<endl;
	if ((Timmy == true) && (Dolores == true) && (MaryJane == true) && (Ted = true))
	{
		cout << "Wszyscy czlonkowie rodziny przezyli !" << endl;
	}
	else if ((Timmy == false) && (Dolores == false) && (MaryJane == false) && (Ted = true))
	{
		cout << "W schronie zostal tylko Ted..."<<endl;
	}
	else
	{
		cout << " Osoby ktore przezyly wybuch to";
		if (Timmy == true)
		{
			cout << " Timmy ";
		}
		if (MaryJane == true)
		{
			cout << " Mary Jane ";
		}
		if (Dolores == true)
		{
			cout << " Dolores ";
		}
		if (Ted == true)
		{
			cout << " i Ted." << endl;
		}
	}
	cout << "Macie ze soba";
	if ((radio == false) && (poradnik == false) && (mapa == false))
	{
		cout<< " nic przydatnego do przetrwania.";
	}
	else
	{
		if ((radio == true) || (poradnik == true))
		{
			if (radio == true)
			{
				cout << " radio ";
			}
			if (poradnik == true)
			{
				cout << " poradnik malego skauta ";
			}
			if (mapa == true)
			{
				cout << " i ";
			}
		}
		if (mapa == true)
		{
			cout << " mape ";
		}
	}
	cout << endl << "Wasza rozrywka ";
	if ((warcaby == false) && (karty == false))
	{
		cout << "bedzie patrzenie sie w sciany";
	}
	else
	{
		cout << "beda ";
		if ((karty == true) && (warcaby==false))
		{
			cout << " bedzie granie w karty";
		}
		else if ((karty == false) && (warcaby == true))
		{
			cout << " bedzie granie w warcaby";
		}
		else if ((karty == true) && (warcaby == true))
		{
			cout << "bedzie granie w karty i warcaby";
		}
	}
	cout << endl << "Bedziecie sie bronic";
	if ((siekiera == false) && (karabin == false) && (klodka == false))
	{
		cout << " golymi piesciami";
	}
	if ((siekiera == true) || (karabin == true))
	{
		if (siekiera == true)
		{
			cout << " siekiera";
		}
		if (klodka == false)
		{
			cout << " i ";
		}
		if (karabin == true)
		{
			cout << " karabinem";
		}
		if (klodka == true)
		{
			cout << " i";
		}
	}
	if (klodka == true)
	{
		cout << " klodka";
	}

		if ((apteczka == true) && (spray == true))
		{
			cout << endl << "W schronie znajduje sie apteczka i spray na owady.";
	}
		else if ((apteczka == false) && (spray == false))
		{
			cout << endl << "Nie macie ani lekow, ani nawet jakiegos sprayu na owady.";
	}
		else if ((apteczka == true) && (spray == false))
		{
			cout << endl << "W schronie znajduje sie apteczka";
		}
		else if ((apteczka == false) && (spray == true))
		{
			cout << endl << "W schronie nie ma apteczki, ale przynajmniej jest spray na owady...";
		}

		Postac TedP(Ted, "Ted");;
		Postac DoloresP(Dolores, "Dolores");
		Postac TimmyP(Timmy, "Timmy");
		Postac MaryJaneP(MaryJane, "Mary Jane");
	Sleep(10000);
	Gra(TedP, DoloresP, TimmyP, MaryJaneP);

}
void Game::Options()
{
	system("cls");
	cout << " Na ten moment nie ma :P" << endl;
	Sleep(1200);
} 
void Game::PrzypiszWartosci()
{

}
void Game::CoZdobyles()
{
	srand(time(NULL));
	if (choice1 == 1)
	{
		jedzenie = rand() % 5 + 3;
			woda = rand() % 3 + 2;
	}
	else if (choice1 == 2)
	{
		jedzenie = rand() % 3 + 2;
		woda = rand() % 5 + 3;
	}
	if (choice2 == 1)
	{
		int szansaTimmy = rand() % 4 + 1;
		int szansaGruba = rand() % 4 + 1;
		int szansaDolores = rand() % 4 + 1;
		if (szansaTimmy == 4 || szansaTimmy == 1)
		{
			Timmy = true;
		}
		else
		{
			Timmy = false;
		}
		if (szansaGruba == 4 || szansaGruba == 1)
		{
			MaryJane = true;
		}
		else
		{
			MaryJane = false;
		}
		if (szansaDolores == 4 || szansaDolores == 1)
		{
			Dolores = true;
		}
		else
		{
			Dolores = false;
		}
		int szansakarty = rand() % 2 + 1;
		int szansawarcaby = rand() % 2 + 1;
		if (szansakarty == 1)
		{
			karty = true;
		}
		else if (szansakarty == 2)
		{
			karty = false;
		}
		if (szansawarcaby == 1)
		{
			warcaby = true;
		}
		else if (szansawarcaby == 2)
		{
			warcaby = false;
		}
		int szansaradio = rand() % 3 + 1;
		int szansaporadnik = rand() % 3 + 1;
		int szansamapa = rand() % 3 + 1;
		if (szansaradio == 1)
		{
			radio = true;
		}
		else
		{
			radio = false;
		}
		if (szansaporadnik == 1)
		{
			poradnik = true;
		}
		else
		{
			poradnik = false;
		}
		if (szansamapa == 1)
		{
			mapa = true;
		}
		else
		{
			mapa = false;
		}

	}
	else if (choice2 == 2)
	{
		int szansaTimmy = rand() % 4 + 1;
		int szansaGruba = rand() % 4 + 1;
		int szansaDolores = rand() % 4 + 1;

		if (szansaTimmy == 4)
		{
			Timmy = true;
		}
		else
		{
			Timmy = false;
		}
		if (szansaGruba == 4)
		{
			MaryJane = true;
		}
		else
		{
			MaryJane = false;
		}
		if (szansaDolores == 4)
		{
			Dolores = true;
		}
		else
		{
			Dolores = false;
		}
		int szansakarty = rand() % 2 + 1;
		int szansawarcaby = rand() % 2 + 1;
		if (szansakarty == 1)
		{
			karty = true;
		}
		else if (szansakarty == 2)
		{
			karty = false;
		}
		if (szansawarcaby == 1)
		{
			warcaby = true;
		}
		else if (szansawarcaby == 2)
		{
			warcaby = false;
		}
		int szansaradio = rand() % 2 + 1;
		int szansaporadnik = rand() % 2 + 1;
		int szansamapa = rand() % 2 + 1;
		if (szansaradio == 1)
		{
			radio = true;
		}
		else
		{
			radio = false;
		}
		if (szansaporadnik == 1)
		{
			poradnik = true;
		}
		else
		{
			poradnik = false;
		}
		if (szansamapa == 1)
		{
			mapa = true;
		}
		else
		{
			mapa = false;
		}
	}
	if (choice3 == 1)
	{
		int szansakarabin = rand() % 2 + 1;
		int szansasiekiera = rand() % 2 + 1;
		int szansaklodka = rand() % 2 + 1;
		if (szansakarabin == 1)
		{
			karabin = true;
		}
		else
		{
			karabin = false;
		}
		if (szansasiekiera == 1)
			{
				siekiera = true;
		}
		else
		{
			siekiera = false;
		}
		if (szansaklodka == 1)
		{
			klodka = true;
		}
		else
		{
			klodka = false;
		}
		int szansaapteczka = rand()% 4 + 1;
		int szansaspray = rand() % 4 + 1;
		if ((szansaapteczka == 1) || (szansaapteczka == 2))
		{
			apteczka = true;
		}
		else
		{
			apteczka = false;
		}
		if (szansaspray == 1)
		{
			spray = true;
		}
		else
		{
			spray = false;
		}
	}
	else if (choice3 == 2)
	{
		int szansakarabin = rand() % 3 + 1;
		int szansasiekiera = rand() % 3 + 1;
		int szansaklodka = rand() % 3 + 1;
		if (szansakarabin == 1)
		{
			karabin = true;
		}
		else
		{
			karabin = false;
		}
		if (szansasiekiera == 1)
		{
			siekiera = true;
		}
		else
		{
			siekiera = false;
		}
		if (szansaklodka == 1)
		{
			klodka = true;
		}
		else
		{
			klodka = false;
		}
		int szansaapteczka = rand() % 4 + 1;
		int szansaspray = rand() % 4 + 1;
		if ((szansaapteczka == 1) || (szansaapteczka == 2)||(szansaapteczka==3))
		{
			apteczka = true;
		}
		else
		{
			apteczka = false;
		}
		if ((szansaspray==1)||(szansaspray==2)||(szansaspray==3))
		{
			spray = true;
		}
		else
		{
			spray = false;
		}
	}
	Ted = true;
	dzien = 1;
}
void Game::Gra(Postac Ted, Postac Dolores, Postac Timmy, Postac MaryJane)
{ 
	while (true)
	{
		system("cls");
		cout << "Dzien " << dzien << endl << endl;
		StanRodziny(Ted, Dolores, Timmy, MaryJane);
		OpisDnia(Ted, Dolores, Timmy, MaryJane);
		dzien++;
		Sleep(2000);
	}
}
void Game::StanRodziny(Postac Ted, Postac Dolores, Postac Timmy, Postac MaryJane)
{
	if (Ted.zyje == true)
	{
		cout << "Ted:      " << Ted.GlodOpis << " " << Ted.WodaOpis;
		if (Ted.chory == true)
		{
			cout << " chory ";
		}
		if (Ted.ranny == true)
		{
			cout << " ranny ";
		}
		if (Ted.szalony == true)
		{
			cout << " szalony ";
		}
		if (Ted.zmeczony == true)
		{
			cout << " zmeczony ";
		}
	}
	else
	{
		cout << "Ted nie zyje";
	}
	cout << endl;
	if (Dolores.zyje == true)
	{
		cout << "Dolores:  " << Dolores.GlodOpis << " " << Dolores.WodaOpis;
		if (Dolores.chory == true)
		{
			cout << " chory ";
		}
		if (Dolores.ranny == true)
		{
			cout << " ranny ";
		}
		if (Dolores.szalony == true)
		{
			cout << " szalony ";
		}
		if (Dolores.zmeczony == true)
		{
			cout << " zmeczony ";
		}
	}
	else
	{
		cout << "Dolores nie zyje";
	}
	cout << endl;
	if (Timmy.zyje == true)
	{
		cout << "Timmy:    " << Timmy.GlodOpis << " " << Timmy.WodaOpis;
		if (Timmy.chory == true)
		{
			cout << " chory ";
		}
		if (Timmy.ranny == true)
		{
			cout << " ranny ";
		}
		if (Timmy.szalony == true)
		{
			cout << " szalony ";
		}
		if (Timmy.zmeczony == true)
		{
			cout << " zmeczony ";
		}
	}
	else
	{
		cout << "Timmy nie zyje";
	}
	cout << endl;
	if (MaryJane.zyje == true)
	{
		cout << "MaryJane: " << MaryJane.GlodOpis << " " << MaryJane.WodaOpis;
		if (MaryJane.chory == true)
		{
			cout << " chory ";
		}
		if (MaryJane.ranny == true)
		{
			cout << " ranny ";
		}
		if (MaryJane.szalony == true)
		{
			cout << " szalony ";
		}
		if (MaryJane.zmeczony == true)
		{
			cout << " zmeczony ";
		}
	}
	else
	{
		cout << "MaryJane nie zyje";
	}
	cout << endl;
}
void Game::OpisDnia(Postac Ted, Postac Dolores, Postac Timmy, Postac MaryJane)
{
	
}

int wybor()
{
	int choice;
	while (!(cin >> choice)) //dopóki strumień jest w stanie błędu -> dopóki podawane są błędne dane
	{
		cout << "blad" << endl << endl;//ew komunikat błędu
		cin.clear(); //kasowanie flagi błędu strumienia
		cin.sync(); //kasowanie zbędnych znaków z bufora
		cin.ignore();
	}
	return choice;
}
