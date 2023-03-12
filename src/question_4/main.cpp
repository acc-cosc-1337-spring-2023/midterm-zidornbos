#include "question4.h"
#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int sold, points;
    char selection;

    do
    {
        cout << "Enter widgets sold: ";
        cin >> sold;

        points = get_earned_points(sold);
        cout << "Points Earned " << points << "\n";

        cout << "Enter Y to continue or N to quit: ";
        cin >> selection;
    }while (selection != 'N' && selection != 'n');


    return 0;
}