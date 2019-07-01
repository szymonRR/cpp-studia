#include <iostream>
#include <sstream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	 
    string s("Ala Ma Kota i Psa ");
    istringstream iss(s);
    n=s.length();
    
    for (int i=0;i<=n;++i)
    
    {
        string sub;
        
        iss >> sub;
        
        cout << "Substring: " << sub <<" "<<sub.length()<< endl;
        if(sub.length()==0)
        break;
    }
getch();
}


    
