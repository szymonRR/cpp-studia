//kalkulator
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
double fLiczba1,fLiczba2,fX,fA;
void dane()

{

cout<<"podaj pierwsza liczbe"<<endl;
cin>>fLiczba1;
cout<<"podaj druga liczbe"<<endl;
cin>>fLiczba2;

}

	void dane_pot()
	{
		cout<<"podaj podstawe"<<endl;
		cin>>fLiczba1;
		cout<<"podaj wykladnik"<<endl;
		cin>>fLiczba2;
	}
	
		void dane_pier()
		{
			cout<<"podaj pierwiastkowana"<<endl;
			cin>>fLiczba1;
		}
		
			void pot()
			{
				fX=pow(fLiczba1,fLiczba2);
				
				
			}
			
				void pier()
				{
					fX=sqrt(fLiczba1);
				
				}
				
					void dane_pierd()
					{
						cout<<"podaj stopien"<<endl;
						cin>>fA;
						cout<<"podaj pierwiastkowana"<<endl;
						cin>>fLiczba1;
					}
					
						void pierd()
						{
							fX=pow(fLiczba1,1/fA);
						}
					

void main()
{

int nOpcja;


cout<<"wybierz dzialanie"<<endl;
cout<<"1-dodawanie  2-odejmowanie  3-mnozenie  4-dzielenie 5-potegowanie 6-pierwiastek kw. 7-pierwiastek dowolnego stopnia  8-wyjscie"<<endl;
cin>>nOpcja;



	switch(nOpcja)
		{
			case 1: dane(); cout<<fLiczba1<<"+"<<fLiczba2<<"="<<fLiczba1 + fLiczba2<<endl; break;
			case 2: dane(); cout<<fLiczba1<<"-"<<fLiczba2<<"="<<fLiczba1 - fLiczba2<<endl; break;
			case 3: dane(); cout<<fLiczba1<<"*"<<fLiczba2<<"="<<fLiczba1 * fLiczba2<<endl; break;
			case 4: dane(); cout<<fLiczba1<<"/"<<fLiczba2<<"="<<fLiczba1 / fLiczba2<<endl; break;
			case 5: dane_pot();pot(); cout<<fLiczba1<<"do"<<fLiczba2<<"="<<fX<<endl; break;
			case 6: dane_pier();pier(); cout<<"pierwiastek z "<<fLiczba1<<"="<<fX<<endl; break;
			case 7: dane_pierd();pierd(); cout<<"pierwiastek stopnia "<<fA<<"-go z "<<fLiczba1<<"="<<fX<<endl; break;
			case 8: cout<<"dowidzenia"<<endl; break;
			default: cout<<"WTF!! zla opcja"<<endl; break;
		}
getch();
}


