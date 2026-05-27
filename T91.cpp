#include <iostream>

using namespace std;

struct Variabels
{
    int num, sum = 0;
};

struct InputVariabels
{
    Variabels data;
};

int main()
{
    InputVariabels Input;
    cout << "Enter the number: ";
    cin >> Input.data.num;

    int n = Input.data.num;
    while (n > 0)
    {
        int LastDigit = Input.data.num % 10;
        Input.data.sum += LastDigit;
        n /= 10;
    }
    cout << "The sum = " << Input.data.sum;   
}


