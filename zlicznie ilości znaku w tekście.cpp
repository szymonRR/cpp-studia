#include <string>
#include <iostream>
#include <conio.h>
using namespace std;

unsigned ZliczZnaki(string strTekst, char chZnak)
{
	unsigned uIlosc = 0;
	
	for (unsigned i = 0; i <= strTekst.length() - 1; ++i)

		{
		if (strTekst[i] == chZnak)
		++uIlosc;
		}
	return uIlosc;
}


		void main()
		{
			string strNapis;
			cout << "Podaj tekst, w ktorym maja byc zliczane znaki: ";
			getline(cin,strNapis);
			char chSzukanyZnak;
			cout << "Podaj znak, ktory bedzie liczony: ";
			cin >> chSzukanyZnak;
			cout << "Znak '" << chSzukanyZnak <<"' wystepuje w tekscie "
			<< ZliczZnaki(strNapis, chSzukanyZnak) << " raz(y)."<< endl;
			
			getch();
		}
