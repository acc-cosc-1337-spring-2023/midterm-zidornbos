#include "question2.h"

bool test_config()
{
    return true;
}

double get_sales_commission(double sales)
{
    double commission = 0.0;

    if(sales > 0 && sales < 500)
    {
        commission = sales * 0.05;
    }
    else if(sales >= 500 && sales < 1000)
    {
        commission = sales * 0.06;
    }
    else if(sales >= 1000 && sales < 1500)
    {
        commission = sales * 0.07;
    }
    else if (sales >= 1500)
    {
        commission = sales * 0.08;
    }
    else
    {
        commission = 0.0;
    }
    
    int commmission_total = (int)commission;
    
    return commmission_total;

}    