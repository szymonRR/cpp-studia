#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

bool liczba_pierwsza(unsigned uLiczba)
{
	if(uLiczba ==2) return true;
	
	for(unsigned i=2;i<= sqrt(uLiczba);++i)
	{
		if(uLiczba % i==0)
		return false;
		else 
		return true;
	}
	
}

void main()
{
	unsigned uWartosc;
	cout<<"podaj liczbe: ";
	cin>>uWartosc;
	
	if(liczba_pierwsza(uWartosc))
		cout<<"liczba "<<uWartosc<<" jest pierwsza";
	else
		cout<<"liczba "<<uWartosc<<" nie jest pierwsza";
		
	getch();
}
