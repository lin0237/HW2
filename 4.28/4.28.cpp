#include <iostream>

int main() 
{
    int paycode;
    double salary = 0.0;

    while (true)
    {
        std::cout << "Enter employee pay code (1 for Manager, 2 for Hourly Worker, 3 for Commission Worker, 4 for Pieceworker, -1 to quit): ";
        std::cin >> paycode;

        if (paycode == -1)
	    {
            break;  
        }

        switch (paycode)
    {
            case 1: 
			{ 
                double weeklySalary;
                std::cout << "Enter weekly salary for Manager: ";
                std::cin >> weeklySalary;
                salary = weeklySalary;
                break;
            }

            case 2: 
			{ 
                double hourlyWage;
                int hoursWorked;
                std::cout << "Enter hourly wage for Hourly Worker: ";
                std::cin >> hourlyWage;
                std::cout << "Enter number of hours worked: ";
                std::cin >> hoursWorked;

                if (hoursWorked <= 40)
			    {
                    salary = hoursWorked * hourlyWage;
                } 
				else 
				{
                    salary = 40 * hourlyWage + (hoursWorked - 40) * 1.5 * hourlyWage;
                }
                break;
            }

            case 3: 
			{ 
                double weeklySales;
                std::cout << "Enter gross weekly sales for Commission Worker: ";
                std::cin >> weeklySales;
                salary = 250 + 0.057 * weeklySales;
                break;
            }

            case 4: 
			{ 
                double pricePerItem;
                int itemsProduced;
                std::cout << "Enter pay per item for Pieceworker: ";
                std::cin >> pricePerItem;
                std::cout << "Enter number of items produced: ";
                std::cin >> itemsProduced;
                salary = pricePerItem * itemsProduced;
                break;
            }

            default: 
			{
                std::cout << "Invalid paycode. Please try again." << std::endl;
                continue;
            }
        }
        std::cout << "The weekly salary is: $" << salary << std::endl;
    }
}
