#include <iostream>
using namespace std;

enum enYearMonthe {January=1, February=2, March=3, April=4, May=5, June=6, July=7, August=8, September=9, Octobe=10, November=11, December=12};

void YearMonthesMenu()
{
    cout << "=========================================\n";
    cout << "               Year monthes              \n";
    cout << "=========================================\n";
    cout << "(1) January" << endl;
    cout << "(2) February" << endl;
    cout << "(3) March" << endl;
    cout << "(4) April" << endl;
    cout << "(5) May" << endl;
    cout << "(6) June" << endl;
    cout << "(7) July" << endl;
    cout << "(8) August" << endl;
    cout << "(9) September" << endl;
    cout << "(10) Octobe" << endl;
    cout << "(11) November" << endl;
    cout << "(12) December" << endl;
    cout << "==========================================\n";
    cout << "Choose a number: ";
    
};

enYearMonthe ReadYearMonth()
{
    int x;
    enYearMonthe Months;
    cin >> x;
    return (enYearMonthe)x;
};

string ChooseMonthes(enYearMonthe Months)
{
    switch (Months)
    {
    case enYearMonthe::January:
        return "January";
        break;
    case enYearMonthe::February:
        return "February";
        break;
    case enYearMonthe::March:
        return "March";
        break;
    case enYearMonthe::April:
        return "April";
        break;
    case enYearMonthe::May:
        return "May";
        break;
    case enYearMonthe::June:
        return "June";
        break;
    case enYearMonthe::July:
        return "July";
        break;
    case enYearMonthe::August:
        return "August";
        break;
    case enYearMonthe::September:
        return "September";
        break;
    case enYearMonthe::Octobe:
        return "October";
        break;
    case enYearMonthe::November:
        return "November";
        break;
    case enYearMonthe::December:
        return "December";
        break;    
    default:
        return "Choose a number from the menu . . . ";
        break;
    }
}

int GetDaysInMonth(enYearMonthe Months)
{
    switch (Months)
    {
    case enYearMonthe::January:   
        return 31;
        break;
    case enYearMonthe::February:  
        return 28;
        break;
    case enYearMonthe::March:     
        return 31;

    case enYearMonthe::April:     
        return 30;
        break;
    case enYearMonthe::May:       
        return 31;
        break;
    case enYearMonthe::June:      
        return 30;
        break;
    case enYearMonthe::July:      
        return 31;
        break;
    case enYearMonthe::August:    
        return 31;
        break;
    case enYearMonthe::September: 
        return 30;
        break;
    case enYearMonthe::Octobe:    
        return 31;
        break;
    case enYearMonthe::November:  
        return 30;
        break;
    case enYearMonthe::December:  
        return 31;
        break;
    default:                      
        return 0;
    }
};

int main()
{
    YearMonthesMenu();
    enYearMonthe month = ReadYearMonth();

    cout << "Your Month is " << ChooseMonthes(month);
    cout << " and it has " << GetDaysInMonth(month) << " days";

    return 0;
}