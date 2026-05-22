#include <iostream>
#include <string>

using namespace std;

struct strinfo
{
    string name;
    int Age; 
    string city;
    string country;
    float MonthlySalary;
    float YearlySalary;
    char gender;
    bool Married;

};

void Readinfo(strinfo &info)
{

    cout << "Please Enter your full name: ";        
        cin >> info.name;
    cout << "Please Enter your age: ";
        cin >> info.Age; 
    cout << "Please Enter your city: ";
        cin >> info.city;
    cout << "Please Enter your country: " ;
        cin >> info.country;
    cout << "Please Enter your MonthlySalary: ";
        cin >> info.MonthlySalary;
    cout << "Please Enter your YearlySalary: ";
        cin >> info.YearlySalary;
    cout << "Please Enter your gender (M to Male, F to Female): " ;
        cin >> info.gender; 
    cout << "Are you married ( 1 to Yes, 0 to No )? ";
        cin >> info.Married; 

};

void Writeinfo (strinfo &info)
{

    cout << "**************************************************\n" ;
        cout << "Name: " << info.name << endl ;
        cout << "Age: " <<  info.Age << endl ;
        cout << "city: " << info.city << endl ;
        cout << "country: " << info.country << endl ;
        cout << "MonthlySalary: " << info.MonthlySalary << endl ;
        cout << "YearlySalar: " << info.YearlySalary << endl ;
        cout << "gender: " << info.gender << endl ;
        cout << "Married: " << info.Married << endl ;
cout << "**************************************************\n" ;

};


int main()
{

    strinfo person1info;
    Readinfo (person1info);
    Writeinfo (person1info);

    strinfo person2info;
    Readinfo (person2info);
    Writeinfo (person2info);
}

