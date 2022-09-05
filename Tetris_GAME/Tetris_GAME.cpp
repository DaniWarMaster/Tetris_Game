// Tetris_GAME.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// creaza doua matrici pe care sa lucrezi: una dintre ele este harta jocului, in timp ce und dintre ele este a formei. La verificare si scriere cele 2 se suprascriu una peste 
//alta. Harta jocului se actualizeaza la ajungerea fiecarei forme intr-un punct c
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int harta[30][12];
int m=11, n=19;
void initializare_joc()
{
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++)
			if (i == 0 || j == 0 || i == n || j == m)
				harta[i][j] = 1;
			else
				harta[i][j] = 0;
}

void desenare_harta()
{
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
			if (harta[i][j] == 1)
				cout << "&";
			else
				cout << " ";
		cout << "\n";
	}
}

void deplasare_dreapta() {

}

void deplasare_stanga() {

}

void rotire_forma() {

}

void logica_tasta(char c)
{
	switch (c)
	{
		case 'A': deplasare_dreapta();
			break;
		case 'D': deplasare_stanga();
			break;
		case 'L': rotire_forma();
			break;
		case 'a': deplasare_dreapta();
			break;
		case 'd': deplasare_stanga();
			break;
		case 'l': rotire_forma();
			break;
	}
}

void forma_noua()
{

}

void logica_forma(int deplasare)
{
	int baza_forma = 0;
	for (int i = 1; i < m; i++)
		if ((harta[baza_forma + 1][i] == 2 || harta[baza_forma + 1][i] == 1) && harta[baza_forma][i]==2)
			deplasare = 0;
}

void deplasare_forma(int deplasare)
{
	
}

int main()
{
	initializare_joc();
	desenare_harta();
	while (1)
	{
		system("cls");
		if (_kbhit)
		{
			char c = _getch();
			logica_tasta(c);
		}
		
		int deplasare = 1;
		logica_forma(deplasare);
		deplasare_forma(deplasare);

		desenare_harta();
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
