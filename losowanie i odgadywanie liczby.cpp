#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

void main()

{
int n=0;
	//losowanie liczby
	srand ((int) time(NULL));
	int nWylosowana = rand() % 100+1;
	cout<<"wylosowano liczbe z przedzialu 1-100"<<endl;
	
	//proba odgadniecia
	int nWprowadzona;
	cout<<"sprobuj ja odgadnac: ";
	cin>>nWprowadzona;
	
	//kolejne proby
	while(nWprowadzona != nWylosowana)
	{
		if (nWprowadzona < nWylosowana)
		cout<<"malo";
		else
		cout<<"duzo";
		cout<<"jeszcze raz";
		cin>>nWprowadzona;
		n=n+1;
	}
cout<<"nice"<<endl;
cout<<"proby: "<<n<<endl;
getch();
}
