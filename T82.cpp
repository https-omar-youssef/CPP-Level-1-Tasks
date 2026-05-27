#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the maximum number: ";
    cin >> num;

    int i = 1;
    int sum = 0;
    while (i <= num)
    {
        sum += i ;
        i += 2;     
    }
    cout << sum << endl;
    
    cout << "===========================================\n";

    int num1; 
    cout << "Enter anther maximum number: ";
    cin >> num1;

    int x = 2, sum1 = 0;
    while (x <= num1)
    {
        sum1 += x;
        x += 2;
    }
    cout << sum1;
    return 0;
}
