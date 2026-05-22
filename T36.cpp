/*NestedStructures and Enums Full Example
txt
Mohammed Abu Hadhoud shared this file. Want to do more with it?
#include <iostream>
using namespace std;

enum enColor { Red, Green, Yellow, Blue};
enum enGendor { Male, Female };
enum enMaritalStatus { Single, Married};


struct stAddress
{
    string StreetName;
    string BuildingNo;
    string POBox;
    string ZipCode;
};


struct stContactInfo
{
    string Phone;
    string Email;
    stAddress Address;
};


struct stPerson
{

    string FirstName;
    string LastName;
  
    stContactInfo ContactInfo;

    enMaritalStatus MaritalStatues;
    enGendor Gendor;
    enColor FavourateColor;
};


int main()
{
    
    stPerson Person1;

    Person1.FirstName = "Mohammed";
    Person1.LastName = "Abu-Hadhoud";

    Person1.ContactInfo.Email = "xyz@xyz.com";
    Person1.ContactInfo.Phone = "+961000000999";
    Person1.ContactInfo.Address.POBox = "7777";
    Person1.ContactInfo.Address.ZipCode = "11194";
    Person1.ContactInfo.Address.StreetName  = "Queen1 Street";
    Person1.ContactInfo.Address.BuildingNo = "313";
    
    Person1.Gendor = enGendor::Male;
    Person1.MaritalStatues = enMaritalStatus::Married;
    Person1.FavourateColor = enColor::Green;

    cout << Person1.ContactInfo.Address.StreetName  << endl;

    
    return 0;
}*/   // this code for example and practice




#include <iostream> 
using namespace std;

enum enColor {blue , white, green , yellow};
enum enGendur {Male, Female};
enum enMaritalStatus {Singel, Married};


struct stAddress
{
    int HousNumber;
    int StreetNumber;
    int BuildingNumber;

};

struct stContant
{
    string PhoneNumber;
    string email;
    string zipcode;
    stAddress Address;
};

struct stperson
{
    string firstName;
    string secondname;

    stContant contant_information;

    enColor favorite_color;
    enGendur Gender;
    enMaritalStatus MaritalStatus;
};


int main()

{

    stperson person;

    person.firstName = "Omar";
    person.secondname = "Youssef";

    person.contant_information.Address.BuildingNumber = 18;
    person.contant_information.Address.HousNumber = 55;
    person.contant_information.Address.StreetNumber = 2515;

    person.favorite_color = enColor::yellow;
    person.Gender = enGendur::Male;
    person.MaritalStatus = enMaritalStatus::Singel;

    person.contant_information.email = "oadsyomar@gmail.com";
    person.contant_information.PhoneNumber = "01159169762";
    person.contant_information.zipcode = "Console.WriteLine";

cout << endl;
cout << "___________________________________________________________\n\n";   
            cout << person.favorite_color << endl;
cout << "___________________________________________________________\n";

                    return 0;

}