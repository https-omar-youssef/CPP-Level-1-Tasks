#include <iostream>
#include <string> 
#include <cmath>
using namespace std;

struct strinfo
{
    string FirstName, LastName, phone;
    int age; 
}

void ReadInfo(strinfo &info)
{
    
    cout << "Enter your first name: ";
        cin >> info.FirstName;
    cout << "Enter your last name: ";
        cin >> info.LastName;
    cout << "Enter your age" ;
        cin >> info.age;
    cout << "Enter you phone number: ";
        cin >> info.phone;
}      

void WriteInfo(strinfo &info)
{
    cout << "Your first name is: " << info.FirstName << endl;
    cout << "Your last name is: " << info.LastName << endl;
    cout << "Your age is: " << info.age << endl;
    cout << "Your phone number is: " << info.phone << endl;
}

void PersonInfo(strinfo person[2])
{
    ReadInfo(person[0]);
    ReadInfo(person[1]);
}

void WritePersonInfo(strinfo person[2])
{
    cout << "Your first name is: " << 
}

int main()
{
    

    
}


struct strinfo
{
    string, FirstName, LastName, phone;
    int age; 
};

void ReadPersonInfo(strinfo &info)
{
    cout << "================================\n";
    cout << "       INFORMATION LIST       ";
    cout << "================================\n";
    cout << "Enter your first name: ";
        cin >> info.FirstName;
    cout << "Enter your last name: ";
        cin >> info.LastName;
    cout << "Enter your age" ;
        cin >> info.age;
    cout << "Enter you phone number: ";
        cin >> info.phone; 
    cout << "================================\n";
}

void WriteInfo(strinfo &info)
{
    cout << "Your first name is: " << info.FirstName << endl;
    cout << "-------------------------------------------\n";
    cout << "Your last name is: " << info.LastName << endl;
    cout << "-------------------------------------------\n";
    cout << "Your age is: " << info.age << endl;
    cout << "-------------------------------------------\n";
    cout << "Your phone number is: " << info.phone << endl;
    cout << "-------------------------------------------\n";
    cout << "================================\n";
}