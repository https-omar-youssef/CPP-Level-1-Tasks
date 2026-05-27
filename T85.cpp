#include <iostream>
using namespace std;

int main()
{
    cout << "Enter numbers to sum those all (-99 to stop) . . . \n";
    cout << "==============================================\n";
    cout << "          ENTER NUMBER 1 TO START      \n";
    cout << "==============================================";
    int number1;
    cin >> number1;

    int sum = 0, num;
    while (num != -99)
    {
        cout << "Enter a number: ";
        cin >> num;

        if (num != -99)
        {
            sum = sum + num;
        }
        
    }
    cout << "The sum of your numbers = " << sum ;
    return 0;
}