#include <iostream>
using namespace std;

int main()
{
    int PIN;

    cout << "Enter the PIN of the ATM: ";
    cin >> PIN;

    if (PIN == 1234)
    {
        cout << "Your Balance = 7500";
    }
    else
    {
        cout << "Enter the correct PIN .... ";
    }

    return 0;
}
