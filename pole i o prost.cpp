//pole i obwod prostokata
#include <iostream>
#include <conio.h>
using namespace std;

	int pole(int bok1, int bok2)
	{
	return bok1 * bok2;
	}

		int obwod(int bok1, int bok2)
		{
		return 2*(bok1+bok2);
		}
	
void main()
{
int dlugosc1,dlugosc2;

cout<<"podaj dlugosc pierwszego boku"<<endl;
cin>>dlugosc1;
cout<<"podaj dlugosc drugiego boku"<<endl;
cin>>dlugosc2;
cout<<"pole to: "<< pole(dlugosc1,dlugosc2)<<endl;
cout<<"obwod to: "<<obwod(dlugosc1,dlugosc2)<<endl;

getch();
}
