//ci¹g fibanacciego
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

unsigned  fib(unsigned  n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return (n-2)+(n-1);
}

void main()
{
	int n;
	
	cout<<"Podaj ktory wyraz wyraz ciagu podac"<<endl;
	cin>> n;
	
	cout<<n<<"-ty wyraz ciagu fibanacciego to: "<<fib(n);
	
getch();
}


