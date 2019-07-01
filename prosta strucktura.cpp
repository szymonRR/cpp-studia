#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

struct CONTACT
{
string strNick;
string strEmail;
int nNumer;
};

	CONTACT Kontakt;
	
	CONTACT dodajkontakt()
	{

		cout<<"podaj nick"<<endl;
		cin>>Kontakt.strNick;
		cout<<"podaj email"<<endl;
		cin>>Kontakt.strEmail;
		cout<<"podaj numer"<<endl;
		cin>>Kontakt.nNumer;
		return Kontakt;
	}

void main()
{
dodajkontakt();
clrscr();
cout<<Kontakt.strNick;
getch();
}
