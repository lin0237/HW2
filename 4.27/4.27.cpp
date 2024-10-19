#include <iostream>
#include <cmath>

int main()
{
	int limit = 500; 
	
    for (int a = 1; a <= limit; ++a) 
	{
        for (int b = a; b <= limit; ++b) 
		{
            for (int c = b; c <= limit; ++c) 
			{
                if (a * a + b * b == c * c)
			    {
				    std::cout << "a = " << a << ", b = " << b << ", c = " << c <<std::endl;
                }
            }
        }
    }
    return 0;
}
