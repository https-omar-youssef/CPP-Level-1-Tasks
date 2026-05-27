#include <iostream>

using namespace std;

struct Variabels
{
    int num;
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
        int LastDigit = n % 10;
        cout << LastDigit;
        n /= 10;
    }
    
}