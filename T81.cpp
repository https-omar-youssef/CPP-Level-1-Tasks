#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int i = 1;
    while (i <= num)
    {
        cout << i << endl;
        i++;
    }

    cout << "==================================\n";

    int num1;
    cout << "Enter anther number: ";
    cin >> num1;

    int x = num;
    while (x >= 1 )
    {
        cout << x << endl;
        x--;
    }
return 0;
}

