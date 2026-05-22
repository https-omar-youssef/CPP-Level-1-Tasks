#include <iostream>
#include <cmath>
using namespace std;


struct AdderessPerson
{
    string street;
    int homenumber;
    int numberfloor;

};

struct PersonFamily
{
    string father,GirlFriend, mother, brother;
    int GFage;

};
struct PersonInformation    
    {
        string name;
        string city;
        string country;
        int age;
        int mounthlysalary;
        int yearlysalary;
        char gender;
        bool married;
    };

int main()
    {
        PersonInformation person;
        AdderessPerson Person;
        PersonFamily person2;        
        person.name = "Omar youssef";
        person.city = "EL mahalla";
        person.country = "Egypt";
        person.age = 18;
        person.mounthlysalary = pow(20, 3) * 30;
        person.yearlysalary = (pow(20, 3) * 30) * 12;
        person.gender = 'M';
        person.married = false;
        Person.street = "10 adel el gazar";
        Person.homenumber = 20;
        Person.numberfloor = 3;
        person2.father = "youssef";
        person2.mother = "Salwa";
        person2.brother = "Ahemd";
        person2.GirlFriend = "Nagwa , but not for sure";
        person2.GFage = 18;


cout << "\n\n";        
        cout << "Name: " << person.name << "\n";
        cout << "Age: " << person.age << "\n";
        cout << "City: " << person.city << "\n";
        cout << "Country: " << person.country << endl;
        cout << "Mounthly salary: " << person.mounthlysalary << "\n";
        cout << "Yearly salary: " << person.yearlysalary << "\n";
        cout << "Gender: " << person.gender << endl;
        cout << "Married: " << person.married << "\n";
        cout << "Street: " << Person.street << "\n";
        cout << "Home number: " << Person.homenumber << "\n";
        cout << "Floor number: " << Person.numberfloor << endl;
        
cout << "\n\n\n\n";
                    return 0;
    }       