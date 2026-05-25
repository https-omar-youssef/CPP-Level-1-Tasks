#include <iostream>
#include <string>
using namespace std;

int main()
{
    int mark;

    cout << "Enter your mark: " ;
    cin >> mark;

    if (mark >= 50)
    {
        cout << "Pass. ";
    }
    else
    {
        cout << "Fail. ";
    }
    
}