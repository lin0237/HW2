#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a,b,c;
	
	cout << "Enter number of hours worked (-1 to end): ";
	cin >> a;
	cout << "Enter hourly rate of the worker ($00.00): ";
	cin >> b;
	
	if(a > 40)
	{
		float c = a-40;
		cout << "Salary is $" << fixed << setprecision(2) << (a*b)+(c*b*0.5) <<endl;
	}
	else
	{
	    cout << "Salary is $" << fixed << setprecision(2) << a*b <<endl;
    }
    return 0;
}
