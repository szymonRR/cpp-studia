#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <ctime>
using namespace std;
const unsigned ILOSC_LICZB = 6;
const int MAKSYMALNA_LICZBA = 49;

void main()
{
	//deklaracja i wyzerowanie tablicy
	unsigned aLiczby[ILOSC_LICZB];
	for (int i=0;i<ILOSC_LICZB;++i)
		aLiczby[i]=0;
	
		//losowanie liczb
		srand(static_cast<int>(time(NULL)));
		for(int i=0;i<ILOSC_LICZB;)
		{
			//wylosowanie liczb
			aLiczby[i]=rand() % MAKSYMALNA_LICZBA+1;
			
			//sprawdzanie czy sie nie powtarza
			
			
			for(int j=0;j<i;++j)
			{
			   bool bPowtarzaSie=false;
				if(aLiczby[j]==aLiczby[i])
				{
				   bPowtarzaSie = true;
					break;
				}
			}
			
			//je¿eli sie nie powtarza, przechodzimy dalej
			if(!bPowtarzaSie) ++i;
		}
		
		//wyœwietlanie
		cout<<"Wynki losowania:"<<endl;
		for (int i=0;i<ILOSC_LICZB;++i)
		cout<<aLiczby[i]<<" ";
		
		getch();
	}


