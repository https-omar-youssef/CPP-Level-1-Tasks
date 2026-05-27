#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int powr;
    cout << "Enter the powr number: ";
    cin >> powr;

    int i = 1, sum = 1;
    while (i <= powr)
    {
        sum = sum * number;
        i++;
    }
    cout << "The sum = " << sum;
    return 0;
    
}
