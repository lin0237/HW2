#include <iostream>

int main() 
{
    int n = 5;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
	    {
            std::cout << " ";
        }
        
        for (int j = 1; j <= 2 * i - 1; ++j) 
		{
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = n - 1; i >= 1; --i) 
	{
        for (int j = 1; j <= n - i; ++j)
	    {
            std::cout << " ";
        }
        
        for (int j = 1; j <= 2 * i - 1; ++j) 
		{
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}

