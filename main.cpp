#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>

using namespace std;

void TitleASCII();
void GameIntro();
void GameStart();
void GameMain();

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
	while (selectionLoop = true)
	{
		system("cls");

		cout << "What would you like to do?" << endl;
		cout << "1) Play" << endl;
		cout << "2) Quit" << endl;

		cin >> g_mainMenuSelection;
	
		switch (g_mainMenuSelection)
		{
		case 1:
			GameMain();
			selectionLoop = false;
			break;
		case 2:
			system("cls");
			cout << "Thanks for playing!" << endl;
			selectionLoop = false;
			break;
		default:
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