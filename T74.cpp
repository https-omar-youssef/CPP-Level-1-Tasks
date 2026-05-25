// this task is Modification on task 58
#include <iostream> 
using namespace std;

struct strinfo
{
    string FirstName, LastName, phone;
    int age; 
};

void ReadPersonInfo(strinfo &info)
{
    cout << "================================\n";
    cout << "       INFORMATION LIST       \n";
    cout << "================================\n";
    cout << "Enter your first name: ";
        cin >> info.FirstName;
    cout << "Enter your last name: ";
        cin >> info.LastName;
    cout << "Enter your age: " ;
        cin >> info.age;
    cout << "Enter you phone number: ";
        cin >> info.phone; 
    cout << "================================\n";
}

void WriteInfo(strinfo &info)
{
    cout << "================================\n";
    cout << "first name is: " << info.FirstName << endl;
    cout << "--------------------------------\n";
    cout << "last name is: " << info.LastName << endl;
    cout << "--------------------------------\n";
    cout << "age is: " << info.age << endl;
    cout << "--------------------------------\n";
    cout << "phone number is: " << info.phone << endl;
    cout << "================================\n\n\n\n";
}

void PersonsNumber(strinfo person[100], int &NumberOfPersons)
{
    cout << "*******************************************" << endl << endl;
    cout << "How many persons you want (from 1 to 100)? ";
    cin >> NumberOfPersons;
    cout << "*******************************************" << endl;

    for (int i = 0; i <= NumberOfPersons - 1; i++)
    {
        cout << "| List of person's " << i + 1 << " information |" << endl;
        ReadPersonInfo(person[i]);

        
    }
    
}

void PrintPersonInfo(strinfo person[100], int &NumberOfPersons)
{
    for (int i = 0; i <= NumberOfPersons - 1 ; i++)
    {
        cout << "     PERSON'S " << i + 1 << " INFORMATION          " << endl;
        WriteInfo(person[i]);
    }
    
}

int main()
{
    strinfo person[100];
    int NumberOfPersons = 1;

    PersonsNumber(person, NumberOfPersons);
    PrintPersonInfo(person, NumberOfPersons);

    return 0;
}
