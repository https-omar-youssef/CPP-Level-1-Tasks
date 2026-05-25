#include <iostream>
using namespace std;

int main()
{
    float TotalSales, EmployeeShare, Persentage ;

    cout << "How much did you sale this month? ";
    cin >> TotalSales;

    

    if (TotalSales == 1000000)
    {
        Persentage = (float) 1/100;
    }
    else if (TotalSales >= 500000 && TotalSales < 1000000)
    {
        Persentage = (float) 2/100;
    }
    else if (TotalSales >= 100000 && TotalSales < 500000)
    {
        Persentage = (float) 3/100;
    }
    else if (TotalSales >= 50000 && TotalSales < 100000)
    {
        Persentage = (float) 5/100;
    }
    else 
    {
        Persentage = 0;
    }
    
    EmployeeShare = Persentage * TotalSales;
    cout << "Your share = " << EmployeeShare ;

    return 0;
    
}