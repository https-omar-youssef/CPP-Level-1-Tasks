#include <iostream>
using namespace std;

int main()
{
    int PIN, Try = 0, TruePIN = 1234, Balance = 7500;
    
    cout << "=========================================\n";
    cout << "           WELCOME TO OUR ATM           \n";
    cout << "=========================================\n";
    cout << "Please Enter Your PIN to unlock (Your limit = 3): ";
    cin >> PIN;
    cout << "-----------------------------------------\n";

    while (Try < 3)
    {
        if (PIN == TruePIN)
        {
            cout << "Correct PIN, Your Balance = " << Balance << " $\n";
            cout << "*****************************************";
            break;
        }
        else
        {
            Try++;

            if (Try == 3)   
            {
                cout << "Your Credit Card has been Locked\n";
                cout << "Try again after 1 Minute\n";
                cout << "*****************************************";
                break;
            }

            cout << "Wrong PIN, Try again Please: ";
            cin >> PIN;
            cout << "-----------------------------------------\n";
        }
    }
    return 0;
}

/* My wrong code 


#include <iostream> 
using namespace std;

int main()
{
    int PIN, Try = 0, TruePIN = 1234, Balance = 7500;
    
    cout << "=========================================\n";
    cout << "           WELCOME TO OUR ATM           \n";
    cout << "=========================================\n";
    cout << "Please Enter Your PIN to unlock : ";
    cin >> PIN;
    cout << "--------------------------------------\n";

    while (Try < 3)
    {
        if (PIN == TruePIN)
        {
            cout << "Correct PIN, Your Balance = " << Balance << "$" ;
            break;
        }
        else if (PIN != TruePIN)
        {
            cout << "Wrong PIN, Try again Please: ";
            cin >> PIN;
            cout << "--------------------------------------\n";
            Try++;
        }
        if (Try == 3)
        {
            cout << "Your Credit Card has been Locked\n"; 
            cout << "Try again after 1 Menute";
        }
        
    } 
    return 0;
}*/