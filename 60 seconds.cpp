#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include "Header.h"
using namespace std;

int main()
{

	Game game;
	while (true)
	{
		game.Menu();
		game.Start();
		game.PrzypiszWartosci();
	}
    return 0;
}

