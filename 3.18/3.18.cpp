#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	float a;
	
	cout << "Enter sales in dollars (-1 to end): ";
	cin >> a;
	cout << "Salary is: " << fixed << setprecision(2) << 200+a*0.09 <<endl;
	
	return 0;
}
