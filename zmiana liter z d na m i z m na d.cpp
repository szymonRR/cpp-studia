#include <iostream> 
#include <string> 
#include <conio.h>
using namespace std; 
int main() { 
  string napis; 
  getline(cin,napis);  
  for (int i=0; i<napis.length(); i++){ 
   if (napis[i]>='A' && napis[i]<='Z') 
    napis[i]= napis[i]+32;  
    else 
    napis[i]= napis[i]-32; 
    cout<< napis[i]; 
} 
     getch(); 
}
