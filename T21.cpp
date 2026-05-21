#include <iostream>
#include <cmath> // عشان نستخدم الأس (pow)

using namespace std;

int main()

{
cout << endl ;
    int number;
    
    cout << "Enter the number: ";
    cin >> number;
cout << "\n\n";
cout << "__________________________\n\n";

    cout << "number^2 = " << pow(number, 2) << endl;
    cout << "number^3 = " << pow(number, 3) << endl;
    cout << "number^4 = " << pow(number, 4) << endl;

cout << "\n";

    return 0;

}