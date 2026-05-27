#include <iostream>
using namespace std;

struct Variabels
{
    int num, LastDigit;
};

struct InputVariabels
{
    Variabels data ;
};

int main()
{
    InputVariabels Input;
    cout << "Enter the number: ";
    cin >> Input.data.num;

    int n = Input.data.num;
    int rev = 0;

    while (n > 0)
    {
        Input.data.LastDigit = n % 10;
        cout << Input.data.LastDigit ;
        rev = rev * 10 + Input.data.LastDigit;
        n /= 10;
    }
    cout << endl;
    if (rev == Input.data.num)
    {
        cout << "Yes";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
