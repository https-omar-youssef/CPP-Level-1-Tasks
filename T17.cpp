#include <iostream>
using namespace std;

int main()

{
    cout << "***********************************\n\n";
cout << "\n\n";
    cout << "The law of the area of a triangle = 1/2 * a * h \n";
    cout << "Where (a) represents the base and (h) represents the length " << endl << endl;
    
    float a, h, temp, Area;

    cout << "So now, Enter the base: ";
    cin >> a;
    cout << "Enter the length: ";
    cin >> h;
cout << "______________________________" << endl << endl ;

    temp = 0.5 * a;
    Area = temp * h;

cout << "| ";
    cout << "Area = " << Area ;
cout << " |" << endl;
cout << "______________________________\n";

cout << "\n\n";

    return 0;

}