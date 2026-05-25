#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    bool DriverLicense;

    cout << "Enter your age: " ;
        cin >> age;
    cout << "Do you have a driver lecinse (t to yes, f to no)? ";
        cin >> DriverLicense;

    if (age > 21 && DriverLicense == true)
    {
        cout << "You have been hierd. " << endl;
    }
    else
    {
        cout << "You have been rejected. ";
    }
    
}