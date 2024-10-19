#include <iostream>
using namespace std;

int main()
{ 
    float a,b,c,d,e;
    
    cout << "Enter account number (-1 to end): ";
    cin >> a;
    cout << "Enter beginning balance: ";
    cin >> b;
    cout << "Enter total charges: ";
    cin >> c;
    cout << "Enter total credits: ";
    cin >> d;
    cout << "Enter credit limit: ";
    cin >> e;
    
    cout << "Account:      " << a <<endl;
    cout << "Credit limit: " << e <<endl;
    cout << "Balance:      " << b+c-d <<endl;
    
    if((b+c-d) > e)
    {
    	cout << "Credit Limit Exceeded." <<endl;
	}  
	return 0;
}
