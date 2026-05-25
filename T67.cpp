#include <iostream>
using namespace std;

enum enWeekDays {Saturday= 1 ,Sunday = 2 , Monday = 3 , Tusday = 4 , Wendsday = 5, Thursday = 6, Friday = 7};

int main ()
{

    int x;
    enWeekDays Day;

    cout << "Choose a day number: ";
    cin >> x;
    Day = (enWeekDays)x;

    switch (Day)
    {
    case 1:
        cout << "Saturday" ;
        break;
    case 2:
        cout << "Sunday";
        break;
    case 3:
        cout << "Monday";
        break;
    case 4:
        cout << "Tusday";
        break;
    case 5:
        cout << "Wendsday";
        break;
    case 6:
        cout << "Thursday";
        break;
    case 7:
        cout << "Friday";
        break;
    
    default:
        cout << "Enter a number of day not the day, like (1, 2, 3, ...) .... ";
        break;
    }
}

