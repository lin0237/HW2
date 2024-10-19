#include <iostream>
using namespace std;

int main()
{
	for (int i=1;i<=3;i++)
	{
		for (int j=1;j<=12;j++)
		{
			if (i==1 || i==3 || j==1 || j==12)
			{
				cout << "+"; 
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
} 
