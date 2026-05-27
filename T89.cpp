#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int number = 0;

    for (int i = 0; i <= 5; i++)
    {
        cout << "Enter a number: ";
        cin >> number;

        if (number > 50)
        {
            cout << "The number is graeter than 50 and it won't be calculated . . . " << endl;
                continue;
        }
        sum += number;
    }
    cout << "The sum = " << sum ;
}


    