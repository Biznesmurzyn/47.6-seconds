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
	Sleep(500);
	system("cls");
	cout << "To ten moment, gdy musisz zdecydowac - co dla ciebie jest najwazniejsze";
	Sleep(500);
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
	Sleep(500);
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
	Sleep(1000);
	Gra(TedP, DoloresP, TimmyP, MaryJaneP);
	koniec = false;

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
void Game::Gra(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane)
{ 
	while (true)
	{

		if (koniec == true)
		{
			return;
		}
		else
		{
			system("cls");
			cout << "Dzien " << dzien << endl << endl;
			StanRodziny(Ted, Dolores, Timmy, MaryJane);
			OpisDnia(Ted, Dolores, Timmy, MaryJane);
			Przydziel(Ted, Dolores, Timmy, MaryJane);
		}
	}
}
void Game::StanRodziny(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (Ted.zyje == true)
	{
		cout << "Ted:      "<< Ted.GlodOpis << " " <<Ted.WodaOpis<<"   "<<Ted.glod<<"/"<<Ted.woda;
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
		cout << "Ted       nie zyje";
	}
	cout << endl;
	if (Dolores.zyje == true)
	{
		cout << "Dolores:  " << Dolores.GlodOpis << " " << Dolores.WodaOpis<<"   " << Dolores.glod << "/" << Dolores.woda;
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
		cout << "Dolores   nie zyje";
	}
	cout << endl;
	if (Timmy.zyje == true)
	{
		cout << "Timmy:    " << Timmy.GlodOpis << " " <<Timmy.WodaOpis << "   " << Timmy.glod << "/" << Timmy.woda;
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
		cout << "Timmy     nie zyje";
	}
	cout << endl;
	if (MaryJane.zyje == true)
	{
		cout << "MaryJane: " << MaryJane.GlodOpis << " " << MaryJane.WodaOpis <<"   " << MaryJane.glod << "/" << MaryJane.woda;
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
		cout << "MaryJane  nie zyje";
	}
	cout << endl<<endl;
}
void Game::OpisDnia(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane)
{
	srand(time(NULL));
	if (dzien == 1)
	{
		int random = rand() % 2 + 1;
		if (random == 1)
		{
			cout << "Pierwszy dzien po wybuchu bomby, nudno tu... ";
		}
		else
		{
			cout << "Kto mogl przewidziec, ze dzisiaj uderzy atomowa... ";
		}
	}
	if ((dzien >= 2) && (dzien <= 13))
	{
		int random = rand() % 10 + 1;
		if (random == 1)
		{
			cout << "Skazenie radioaktywne na powierzchni jest bardzo silne, chyba lepiej bedzie jak zostaniemy w schronie...";
		}
		if (random == 2)
		{
			cout << "Brr zimno, ale w schronie przynajmniej nie staniemy sie mutantami";
		}
		if (random == 3)
		{
			cout << "W schronie jest nudno, ale lepiej chyba nie wychodzic na zewnatrz";
		}
		if (random == 4)
		{
			cout << "Powierzchnia jest skazona, a w schronie nic sie nie dzieje";
		}
		if (random == 5)
		{
			cout << "Szczur z dwoma glowami? Smieszne";
		}
		if (random == 6)
		{
			cout << "Wydaje nam sie, ze skazenie na powierzchni nigdy nie przejdzie";
		}
		if (random == 7)
		{
			cout << "Nic ciekawego sie nie wydazylo";
		}
		if (random == 8)
		{
			cout << "Drzwi przybraly dziwny zielony kolor, czyzby wplyw promieniowania?";
		}
		if (random == 9)
		{
			cout << "Gramy sobie w papier kamien nozyce, fajna gra";
		}
		if (random == 10)
		{
			cout << "Adolf Hitler nie wiedzial o atomowym holokauscie";
		}
	}
	cout << endl<<endl;
}
void Game::Przydziel(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane)
{
	cout << "Przydziel zywnosc (1)" << endl;
	cout << "Uzyj apteczki (2)" << endl;
	cout << "Zapasy (3)" << endl;
	cout << "Wyrusz na wyprawe (4)" << endl;
	cout << "Nastepny dzien (5)" << endl;
	int choice = wybor();
	switch (choice)
	{
	case 1:
	{
		system("cls");
		if (Ted.zyje == true)
		{
			cout << "Ted (1)"<<endl;
		}
		if (Dolores.zyje == true)
		{
			cout << "Dolores (2)"<<endl;
		}
		if (Timmy.zyje == true)
		{
			cout << "Timmy (3)"<<endl;
		}
		if (MaryJane.zyje == true)
		{
			cout << "Mary Jane (4)"<<endl;
		}
		int choice2 = wybor();
		switch (choice2)
		{
		case 1: Przydzielzywnosc(Ted); break;

		case 2: Przydzielzywnosc(Dolores); break;

		case 3: Przydzielzywnosc(Timmy); break;

		case 4: Przydzielzywnosc(MaryJane); break;

		}
		break;
	}
	case 2:
	{
		system("cls");
		if (Ted.zyje == true)
		{
			cout << "Ted (1)" << endl;
		}
		if (Dolores.zyje == true)
		{
			cout << "Dolores (2)" << endl;
		}
		if (Timmy.zyje == true)
		{
			cout << "Timmy (3)" << endl;
		}
		if (MaryJane.zyje == true)
		{
			cout << "Mary Jane (4)" << endl;
		}
		int choice2 = wybor();
		switch (choice2)
		{
		case 1: Przydzielleki(Ted); break;

		case 2: Przydzielleki(Dolores); break;

		case 3: Przydzielleki(Timmy); break;

		case 4: Przydzielleki(MaryJane); break;

		}
		break;
	}
	case 3:
	{
		system("cls");
		cout << "W spichlerzu jest " << woda << " butelek wody oraz " << jedzenie << " puszek zupy" << endl;
		cout << "Poza tym w schronie znajduje sie: " << endl;
		if (apteczka == true)
		{
			cout << "apteczka" << endl;
		}
		if (spray == true)
		{
			cout << "spray na owady" << endl;
		}
		if (karty == true)
		{
			cout << "karty" << endl;
		}
		if (warcaby == true)
		{
			cout << "warcaby" << endl;
		}
		if (radio == true)
		{
			cout << "radio" << endl;
		}
		if (poradnik == true)
		{
			cout << "poradnik malego skauta" << endl;
		}
		if (mapa == true)
		{
			cout << "mapa" << endl;
		}
		if (siekiera == true)
		{
			cout << "siekiera" << endl;
		}
		if (karabin == true)
		{
			cout << "karabin" << endl;
		}
		if (klodka == true)
		{
			cout << "klodka" << endl;
		}
		Sleep(5000);
		break;
	}
	case 4: break;
	case 5:
	{
		Aktualizacja(Ted, Dolores, Timmy, MaryJane);
		break;
	}
	}
}
void Game::Przydzielzywnosc(Postac &postac)
{

	if (postac.zyje == true)
	{
		cout << endl << endl << "Jedzenie (1)" << endl << "Woda(2)" << endl << endl;
		int choice3 = wybor();
		switch (choice3)
		{
		case 1:
		{
			if (postac.J == true)
			{
				postac.J = false;
				jedzenie += 0.25;
			}
			else if (jedzenie >= 0.25)
			{
				postac.J = true;
				jedzenie -= 0.25;
			}
			else
			{
				cout << "Nie macie jedzenia ! ha ha";
				Sleep(1250);

			}
			break;
		}
		case 2:
		{
			if (postac.W == true)
			{
				postac.W = false;
				woda += 0.25;
			}
			else if (woda >= 0.25)
			{
				postac.W = true;
				woda -= 0.25;
			}
			else
			{
				cout << "Nie macie wody ! ha ha";
				Sleep(1250);

			}
			break;
		}
		}
	}
	else
	{
		cout << "Coo?";
	}
}
void Game::Przydzielleki(Postac &postac)
{
		if (postac.zyje == true)
		{
			if (postac.A==true)
			{
				postac.A = false;
				apteczka = true;
			}
			else if (postac.A == false)
			{
				if (apteczka == false)
				{
					system("cls");
					cout << "Nie macie apteczki";
					Sleep(1000);
				}
				else if (apteczka == true)
				{
					postac.A = true;
					apteczka = false;
					cout << postac.imie << " otrzymal leki";
				}
				}

		}
		else
		{
			cout << "Coo?";
		}

}
void Game::Aktualizacja(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane)
{
	//System glodu i wody
	Ted.glod -= 1; Ted.woda -= 2;
	Dolores.glod -= 1; Dolores.woda -= 2;
	Timmy.glod -= 1; Timmy.woda -= 2;
	MaryJane.glod -= 1; MaryJane.woda -= 2;
	//System jedzenia/picia/apteczki
	if (Ted.zyje == true)
	{
		if (Ted.J == true)
		{
			Ted.glod = Ted.glod + 6;
			Ted.J = false;
			if (Ted.glod > 8)
			{
				Ted.glod = 8;
			}
		}
		if (Ted.W == true)
		{
			Ted.woda = Ted.woda + 8;
			Ted.W = false;
			if (Ted.woda > 8)
			{
				Ted.woda = 8;
			}
		}
		if (Ted.A == true)
		{
			Ted.chory = false;
			Ted.ranny = false;
		}
	}
	if (Dolores.zyje == true)
	{
		if (Dolores.J == true)
		{
			Dolores.glod = Dolores.glod + 6;
			Dolores.J = false;
			if (Dolores.glod > 8)
			{
				Dolores.glod = 8;
			}
		}
		if (Dolores.W == true)
		{
			Dolores.woda = Dolores.woda + 8;
			Dolores.W = false;
			if (Dolores.woda > 8)
			{
				Dolores.woda = 8;
			}
		}
		if (Dolores.A == true)
		{
			Dolores.chory = false;
			Dolores.ranny = false;
		}
	}
	if (Timmy.zyje == true)
	{
		if (Timmy.J == true)
		{
			Timmy.glod = Timmy.glod + 6;
			Timmy.J = false;
			if (Timmy.glod > 8)
			{
				Timmy.glod = 8;
			}
		}
		if (Timmy.W == true)
		{
			Timmy.woda = Timmy.woda + 8;
			Timmy.W = false;
			if (Timmy.woda > 8)
			{
				Timmy.woda = 8;
			}
		}
		if (Timmy.A == true)
		{
			Timmy.chory = false;
			Timmy.ranny = false;
		}

	}
	if (MaryJane.zyje == true)
	{
		if (MaryJane.J == true)
		{
			MaryJane.glod = MaryJane.glod + 6;
			MaryJane.J = false;
			if (MaryJane.glod > 8)
			{
				MaryJane.glod = 8;
			}

		}
		if (MaryJane.W == true)
		{
			MaryJane.woda = MaryJane.woda + 8;
			MaryJane.W = false;
			if (MaryJane.woda > 8)
			{
				MaryJane.woda = 8;
			}
		}
		if (MaryJane.A == true)
		{
			MaryJane.chory = false;
			MaryJane.ranny = false;
		}
	}

	//System œmierci
	if ((Ted.glod < 1) || (Ted.woda < 1))
	{
		Ted.zyje = false;
	}
	if ((Dolores.glod < 1) || (Dolores.woda < 1))
	{
		Dolores.zyje = false;
	}
	if ((Timmy.glod < 1) || (Timmy.woda < 1))
	{
		Timmy.zyje = false;
	}
	if ((MaryJane.glod < 1) || (MaryJane.woda < 1))
	{
		MaryJane.zyje = false;
	}
	Stan(Ted);
	Stan(Dolores);
	Stan(Timmy);
	Stan(MaryJane);
	if ((Ted.zyje == false) && (Dolores.zyje == false) && (Timmy.zyje == false) && (MaryJane.zyje == false))
	{
		Koniec(Ted, Dolores, Timmy, MaryJane);
	}
	else
	{
		dzien++;
	}
	
}
void Game::Koniec(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane)
{
	system("cls");
	cout << "Nie przetrwaliscie" << endl;
	cout << "Wytrzymaliscie " << dzien << " dni";
	Sleep(3000);
	koniec = true;
}
void Game::Stan(Postac &postac)
{
	if (postac.glod == 8)
	{
		postac.GlodOpis = "Najedzony/a";
	}
	else if (postac.glod >= 6)
	{
		postac.GlodOpis = "Glodny/a";
	}
	else if (postac.glod >= 3)
	{
		postac.GlodOpis = "Bardzo glodny/a";
	}
	else if (postac.glod >= 1)
	{
		postac.GlodOpis = "Umierajacy/a z braku jedzenia";
	}
	if (postac.woda == 8)
	{
		postac.WodaOpis = "Nawodniony/a";
	}
	else if (postac.woda >= 6)
	{
		postac.WodaOpis = "Napilby/Napilaby sie";
	}
	else if (postac.woda >= 3)
	{
		postac.WodaOpis = "Odwodniony/a";
	}
	else if (postac.woda >= 1)
	{
		postac.WodaOpis = "Umierajacy/a z braku wody";
	}
}
void Game::Event(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane)
{

}
int wybor()
{
	int choice;
	while (!(cin >> choice)) //dopóki strumieñ jest w stanie b³êdu -> dopóki podawane s¹ b³êdne dane
	{
		cout << "blad" << endl << endl;//ew komunikat b³êdu
		cin.clear(); //kasowanie flagi b³êdu strumienia
		cin.sync(); //kasowanie zbêdnych znaków z bufora
		cin.ignore();
	}
	return choice;
}