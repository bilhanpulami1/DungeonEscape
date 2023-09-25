#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>

#include "Status.h"
#include "Point.h"

using namespace std;

void TitleASCII();
void GameIntro();
void GameStart();
void GameMain();
void PlayDoorClosedSound();
void PlayDoorOpenSound();
void PlayKeyPickupSound();
void PlayWinSound();

int g_mainMenuSelection;

int main()
{
	TitleASCII();
	GameIntro();
	GameStart();

	return 0;
}

void TitleASCII()
{
	system("cls");
	cout << " '||''''|                                        .|';                          " << endl;
	cout << "  ||   .                                         ||                            " << endl;
	cout << "  ||'''|  ('''' .|'',  '''|.  '||''|, .|''|,    '||'  '||''| .|''|, '||),,(|,  " << endl;
	cout << "  ||       `'') ||    .|''||   ||  || ||..||     ||    ||    ||  ||  || || ||  " << endl;
	cout << " .||....| `...' `|..' `|..||.  ||..|' `|...     .||.  .||.   `|..|' .||    ||. " << endl;
	cout << "                               ||                                              " << endl;
	cout << "                              .||                                              " << endl;
	cout << "                 '|||   |||`                            ||    " << endl;
	cout << "                  ||||.||||                             ||    " << endl;
	cout << "                  ||     ||  .|''|, '||  ||` `||''|,  ''||''  " << endl;
	cout << "                  ||     ||  ||  ||  ||  ||   ||  ||    ||    " << endl;
	cout << "                 .||     ||. `|..|'  `|..'|. .||  ||.   `|..' " << endl;
	cout << "                                                              " << endl;
	cout << "                                                              " << endl;
	cout << "         .|'''',         '||`                           ||             " << endl;
	cout << "         ||               ||                      ''    ||             " << endl;
	cout << "         ||       '''|.   ||   '''|.  '||),,(|,   ||  ''||''  '||  ||` " << endl;
	cout << "         ||      .|''||   ||  .|''||   || || ||   ||    ||     `|..||  " << endl;
	cout << "         `|....' `|..||. .||. `|..||. .||    ||. .||.   `|..'      ||  " << endl;
	cout << "                                                                ,  |'  " << endl;
	cout << "                                                                 ''    " << endl;

	system("pause");
}

void GameIntro()
{
	system("cls");
	cout << "Backstory" << endl;
	system("pause");

	system("cls");
	cout << "Objectives" << endl;
	system("pause");

	system("cls");
	cout << "Controls" << endl;
	system("pause");
}

void GameStart()
{
	bool selectionLoop = true;

	while (selectionLoop)
	{
		system("cls");

		cout << "What would you like to do?" << endl;
		cout << "1) Play" << endl;
		cout << "2) Quit" << endl;

		cin >> g_mainMenuSelection;

		if (g_mainMenuSelection == 1)
		{
			GameMain();
			selectionLoop = false;
		}
		else if (g_mainMenuSelection == 2)
		{
			system("cls");
			cout << "Thanks for playing!" << endl;
			selectionLoop = false;
		}
		else
		{
			system("cls");
			cout << "That's not a valid selection, please try again..." << endl;
			system("pause");
		}
	}
}

void GameMain()
{
	bool gameLoop = true;

	while (gameLoop)
	{
		cout << "game" << endl;
	}
}

void PlayDoorClosedSound()
{
	Beep(500, 75);
	Beep(500, 75);
}
void PlayDoorOpenSound()
{
	Beep(1397, 200);
}
void PlayKeyPickupSound()
{
	Beep(1568, 200);
}
void PlayWinSound()
{
	Beep(1568, 200);
	Beep(1568, 200);
	Beep(1568, 200);
	Beep(1245, 1000);
	Beep(1397, 200);
	Beep(1397, 200);
	Beep(1397, 200);
	Beep(1175, 1000);
}