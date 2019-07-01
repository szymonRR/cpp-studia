//usówanie spacji
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

void main()
{
	string tekst, usun;
	cout<<"podaj tekst"<<endl;
	getline(cin,tekst);
	
		for(int i=0;i<tekst.length();++i)
		{
			if(tekst[i]!=' ')
			usun+=tekst[i];
		}
		
			tekst=usun;
			cout<<tekst;

getch();
}

