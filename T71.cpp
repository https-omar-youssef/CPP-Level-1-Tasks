#include <iostream>
using namespace std;

int ReadUserInput()
{
    cout << "Enter a number to factorial it (should be a posetive number): ";

    int num;
    cin >> num;
    return num;
}

int CalculatFactorial(int num)
{
    int result = 1;
    
    for (int i = num; i >= 1; i--)
    {
         result = result * num;
         num--;
    }

    cout << "The factorial = " << result << endl;

    return result;
    
}

int main()
{
    CalculatFactorial(ReadUserInput());

    return 0;
}

