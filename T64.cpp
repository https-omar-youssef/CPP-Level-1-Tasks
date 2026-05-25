#include <iostream>
using namespace std;

int main()
{
    int Grade;

    cout << "Enter your Grade: ";
    cin >> Grade;

    if (Grade >= 90 && Grade <= 100)
    {
        cout << "A";
    }
    else if (Grade <= 89 && Grade >= 80)
    {
        cout << "B";

    }
    else if (Grade <= 79 && Grade >= 70)
    {
            cout << "C";
    }
    else if (Grade <= 69 && Grade >= 60)
    {
        cout << "D";
    }
    else if (Grade <= 59 && Grade >= 50)
    {
        cout << "E";
    }
    else 
    {
        cout << "F";
    }
    return 0;
}