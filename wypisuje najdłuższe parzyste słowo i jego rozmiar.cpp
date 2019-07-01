//rozmiar najd³u¿szego parzystego s³owa
#include <iostream>
#include <sstream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	 int n,ab;
    string s;
    cout<<"podaj zdanie"<<endl;
    getline(cin,s);
    istringstream iss(s);
    n=s.length();
    string aTaba[100];
    unsigned aTab[100];
    for (int i=0;i<n;++i)
		aTab[i]=0;
		
    
    for (int i=0;i<=n;++i)
    
    {
        string sub;
        
        iss >> sub;
        
      
        if(sub.length() % 2 == 0)
        aTab[i]=sub.length();
        aTaba[i]=sub;
        
	
        if(sub.length()==0)
        break;
    }
    	int max=aTab[0];
    	for (int i=0; i<n;++i)
    	if(max<aTab[i])
    	max=aTab[i];
    	
    	
    	
    
		cout<<"najdlusze parzyste slowo/a ma rozmiar: "<<max<<endl;
		
		for (int j=0;j<n;++j)
    	{
    	if(aTab[j]==max)
    	 cout<<"A jest to slowo/a: "<<aTaba[j]<<"  ";
    	
    	}
    	
    	
    	
				
		
getch();
}


    
