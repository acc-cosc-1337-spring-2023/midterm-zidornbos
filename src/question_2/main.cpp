#include <iostream>
#include "question2.h"

using std::cout;
using std::cin;

int main()
{
    double sales, commission;
    char selection;

    do
    {
        cout << "Enter the sales amount: ";
        cin >> sales;

        commission = get_sales_commission(sales);
        cout << "Sales of $" << sales << " yields a commission of $" << commission << "\n";

        cout << "Enter Y to continue or N to quit: ";
        cin >> selection;
    } while (selection != 'N' && selection != 'n');
    
    return 0;
}