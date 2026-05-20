#include <iostream>
#include <string>
using namespace std; 

int main()

{

    //string name = "Omar youssef";
    //int Age = 18;
    //string city = "El mahalla";
    //string country = "Egypt";
    //float MonthlySalary = 2000 + 300.5;
    //float YearlySalary = ( 2000 + 300.5 ) * 12;
    //char gender = 'M';
    //bool Married = false;


    string name;
    int Age; 
    string city;
    string country;
    float MonthlySalary;
    float YearlySalary;
    char gender;
    bool Married;
    

cout << "Please Enter your name: \n";
cin >> name;
cout << "Please Enter your age: \n";
cin >> Age; 
cout << "Please Enter your city: \n";
cin >> city;
cout << "Please Enter your country: " << endl;
cin >> country;
cout << "Please Enter your MonthlySalary: \n";
cin >> MonthlySalary;
cout << "Please Enter your YearlySalary: \n";
cin >> YearlySalary;
cout << "Please Enter your gender: " << endl;
cin >> gender; 
cout << "Are you married? \n";
cin >> Married;





cout << "**************************************************\n" ;
        cout << "Name: " << name << endl ;
        cout << "Age: " <<  Age << endl ;
        cout << "city: " << city << endl ;
        cout << "country: " << country << endl ;
        cout << "MonthlySalary: " << MonthlySalary << endl ;
        cout << "YearlySalar: " << YearlySalary << endl ;
        cout << "gender: " << gender << endl ;
        cout << "Married: " << Married << endl ;
cout << "**************************************************\n" ;       
    
        return 0;

}