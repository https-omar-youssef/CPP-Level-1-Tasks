#include <iostream>
#include <cmath>
using namespace std;

int ReadUserInput()
{
    cout << "Enter a numer: ";
    int num1;
    cin >> num1;
    cout << "Enter a powr number: ";
    int num2;
    cin >> num2;
    int result = pow(num1, num2);

    return result;
}

int CalculatPowr(int result)
{
    cout << "The result = " << result;
    return result;
}

int main()
{
    CalculatPowr(ReadUserInput());

    return 0;
}