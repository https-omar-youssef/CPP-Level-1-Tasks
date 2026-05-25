#include <iostream>
using namespace std;

int main()
{
    int Age;

    cout << "Enter your age: ";
    cin >> Age;

    if (18 < Age && Age < 45)
    {
        cout << "Valid age. ";
    }
    else
    {
        cout << "Invalid age.";
    }
}