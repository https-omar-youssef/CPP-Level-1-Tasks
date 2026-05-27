#include <iostream>
using namespace std;

int ReadUserNumber()
{
    int N;
    cout << "Enter a number to factorial: ";
    cin >> N;
    return N;
}

int CalculateFactorial(int N)
{
    int i = N;
    int sum = 1;
    while (i >= 1)
    {
        sum = sum * i;
        i--;
    }
    cout << sum;
    return sum;
}

int main()
{
    CalculateFactorial(ReadUserNumber());
    return 0;
}