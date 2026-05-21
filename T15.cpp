#include <iostream>
using namespace std;

int main()

{

    int X, Y, temp;

    cout << "Enter value of X: ";
    cin >> X;
    cout << "Enter value of Y: ";
    cin >> Y;
cout << "\n";
cout << "************************************\n";

    cout << "Value of X = " << X << endl;
    cout << "Value of Y = " << Y << endl;
cout << "__________________________________________\n\n";
    
   temp = X;
    X = Y;
    Y = temp;


    cout << "New Value of X = " << X << endl;
    cout << "New Value of Y = " << Y << endl;
cout << "\n\n\n";

    return 0;

}
