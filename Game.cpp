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
		system("cls");
		cout << "Dzien " << dzien << endl << endl;
		StanRodziny(Ted, Dolores, Timmy, MaryJane);
		OpisDnia(Ted, Dolores, Timmy, MaryJane);
		Przydziel(Ted, Dolores, Timmy, MaryJane);
	}
}
void Game::StanRodziny(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane)
{
	if (Ted.zyje == true)
	{
		cout << "Ted:      " << Ted.GlodOpis << " " << Ted.WodaOpis<<"   "<<Ted.glod<<"/"<<Ted.woda;
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
		cout << "Dolores nie zyje";
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
		cout << "Timmy nie zyje";
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
		cout << "MaryJane nie zyje";
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
	cout << "Wyrusz na wyprawe (3)" << endl;
	cout << "Nastepny dzien (4)" << endl;
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
		case 1:
		{
			if (Ted.zyje == true)
			{
				cout << endl << endl << "Jedzenie (1)" << endl << "Woda(2)" << endl << endl;
				int choice3 = wybor();
				switch (choice3)
				{
				case 1: TedJ = true; break;
				case 2: TedW = true; break;
				}
			}
			else
			{
				cout << "Coo?";
				break;
			}
			break;
		}
		case 2:
		{
			if (Dolores.zyje == true)
			{
				cout << endl << endl << "Jedzenie (1)" << endl << "woda(2)" << endl << endl;
				int choice3 = wybor();
				switch (choice3)
				{
				case 1: DoloresJ = true;
				case 2: DoloresW = true;
				}
			}
			else
			{
				cout << "Coo?";
				break;
			}
			break;
		}
		case 3:
		{
			if (Timmy.zyje == true)
			{
				cout << endl << endl << "Jedzenie (1)" << endl << "woda(2)" << endl << endl;
				int choice3 = wybor();
				switch (choice3)
				{
				case 1: TimmyJ = true;
				case 2: TimmyW = true;
				}
			}
			else
			{
				cout << "Coo?";
				break;
			}
			break;
		}
		case 4:
		{
			if (MaryJane.zyje == true)
			{
				cout << endl << endl << "Jedzenie (1)" << endl << "woda(2)" << endl << endl;
				int choice3 = wybor();
				switch (choice3)
				{
				case 1: MaryJaneJ = true;
				case 2: MaryJaneW = true;
				}
			}
			else
			{
				cout << "Coo?";
				break;
			}
			break;
		}
		}
		break;
	}
	case 4:
	{
		Aktualizacja(Ted, Dolores, Timmy, MaryJane);
		break;
	}
	}
}
void Game::Aktualizacja(Postac &Ted, Postac &Dolores, Postac &Timmy, Postac &MaryJane)
{
	//System glodu i wody
	Ted.glod -= 1; Ted.woda -= 2;
	Dolores.glod -= 1; Dolores.woda -= 2;
	Timmy.glod -= 1; Timmy.woda -= 2;
	MaryJane.glod -= 1; MaryJane.woda -= 2;
	//System jedzenia/picia
	if (Ted.zyje == true)
	{
		if (TedJ == true)
		{
			Ted.glod = Ted.glod + 6;
			jedzenie -= 0.25;
			TedJ = false;
		}
		if (TedW == true)
		{
			Ted.woda = Ted.woda + 8;
			woda -= 0.25;
			TedW = false;
		}
	}
	if (Dolores.zyje == true)
	{
		if (DoloresJ == true)
		{
			Dolores.glod = Dolores.glod + 6;
			jedzenie -= 0.25;
			DoloresJ = false;
		}
		if (DoloresW == true)
		{
			Dolores.woda = Dolores.woda + 8;
			woda -= 0.25;
			DoloresW = false;
		}
	}
	if (Timmy.zyje == true)
	{
		if (TimmyJ == true)
		{
			Timmy.glod = Timmy.glod + 6;
			jedzenie -= 0.25;
			TimmyJ = false;
		}
		if (TimmyW == true)
		{
			Timmy.woda = Timmy.woda + 8;
			woda -= 0.25;
			TimmyW = false;
		}
	}
	if (MaryJane.zyje == true)
	{
		if (MaryJaneJ == true)
		{
			MaryJane.glod = MaryJane.glod + 6;
			jedzenie -= 0.25;
			MaryJaneJ = false;
		}
		if (MaryJaneW == true)
		{
			MaryJane.woda = MaryJane.woda + 8;
			woda -= 0.25;
			MaryJaneW = false;
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
	dzien++;

	
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