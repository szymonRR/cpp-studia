//zmiana liter na *
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

void main()
{
	string s;
	cout<<"podaj zdanie"<<endl;
	getline(cin,s);
	
		for(int i=0;i<s.length();++i)
		{	
			if(s[i]!=' ')
			s[i]='*';
		}
		
		
cout<<s;
getch();
}


