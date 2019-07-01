#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int suma(int nLiczba)
{
	int nSuma=0;
	for( int i=1;i<=nLiczba;i++)
	nSuma+=i;
	return nSuma;
}
	
	
void main()
{
int nLiczba;
cout<<"program liczy sume do 1 do podanej liczby"<<endl;
cout<<"podaj ja";
cin>>nLiczba;
cout<<"suma liczb do 1 do "<<nLiczba<<" wynosi: "<< suma (nLiczba)<<". ";
getch();
}

