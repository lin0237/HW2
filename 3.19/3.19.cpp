#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a,b,c;
	
	cout << "Enter loan principal (-1 to end): ";
	cin >> a;
	cout << "Enter interest rate: ";
	cin >> b;
	cout << "Enter term of the loan in days: ";
	cin >> c;
	cout << "The interest charge is $" << fixed << setprecision(2) << a*b*c/365 <<endl;
	
	return 0;
}
