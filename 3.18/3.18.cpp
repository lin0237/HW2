#include <iostream>
using namespace std;

int main()
{
	float a;
	
	cout << "Enter sales in dollars (-1 to end): ";
	cin >> a;
	cout << "Salary is: " << 200+a*0.09 <<endl;
	
	return 0;
}
