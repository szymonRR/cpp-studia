//rzut kostk¹
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <ctime>

using namespace std;

int random(int nMin, int nMax){return rand() % nMax+nMin;}

void main()
{
	//zainicjowanie generatora liczb losowych aktualnym czasem
	srand(static_cast<unsigned int>(time(NULL)));
	
	//wylosowanie liczby
	cout<<"wylosowana liczba to "<<random(1,6)<<endl;
	
	getch();
}	
