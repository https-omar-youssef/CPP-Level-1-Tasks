#include <iostream>
#include <string>
using namespace std;

int main()
{
    int mark1, mark2, mark3, Average;

    cout << "Enter the first mark: ";
    cin >> mark1;
    cout << "And the second one: ";
    cin >> mark2;
    cout << "And the last one: ";
    cin >> mark3;

    Average = (mark1 + mark2 + mark3) / 3;

    if (Average >= 50)
    {
        cout << "Pass" ;

    }
    else
    {
        cout << "Fail";
    }
    
}