//rozmiar najd³u¿szego parzystego s³owa
#include <iostream>
#include <sstream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	 int n;
    string s("Ala Ma Kota i Psa ");
    istringstream iss(s);
    n=s.length();
    unsigned aTab[100];
    for (int i=0;i<n;++i)
		aTab[i]=0;
    
    for (int i=0;i<=n;++i)
    
    {
        string sub;
        
        iss >> sub;
        
      
        if(sub.length() % 2 == 0)
        aTab[i]=sub.length();
        
	
        if(sub.length()==0)
        break;
    }
    	int max=aTab[0];
    	for (int i=0; i<n;++i)
    	if(max<aTab[i])
    	max=aTab[i];
    
		cout<<max;
				
		
getch();
}


    
