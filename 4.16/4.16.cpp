#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i,j,a,b,x,y,d,e;
	for(i=1; i<=10; i++)
	{
		for(j=1; j<=i; j++)
		cout << "*";
		cout <<endl;
	}
	
	cout <<endl;
	
	for(a=1; a<=10; a++)
	{
		for(b=10; b>=a; b--)
		cout << "*";
		cout <<endl;
	}
	
	cout <<endl;
	
	for(x=1; x<=10; x++)
	{
		for(y=1; y<x; y++)
		cout << " ";
		
		for(y=10; y>=x; y--)
		cout << "*";
		cout <<endl;
	}
	
	cout <<endl;
	
	for(d=1; d<=10; d++)
	{
		for(e=10; e>d; e--)
		cout << " ";
		
		for(e=1; e<=d; e++)
		cout << "*";
		cout <<endl;
	}
	return 0;
}



