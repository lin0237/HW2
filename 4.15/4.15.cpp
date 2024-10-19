#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

int main()
{
	float total;
	int principal=5000;
	
	for(float rate=0.1; rate<=0.125; rate=rate+0.005)
	{
	    for(int year=1; year<=15; year++)	
	    {
	    	total=principal*pow(1+rate,year);
	    	cout << "Interest rate:" << rate*100 <<"%" <<endl;
			cout << "Year: ²Ä" << year << "¦~" <<endl;
			cout << "Total: $" << total <<endl;
	    }
	}
	return 0;
}
