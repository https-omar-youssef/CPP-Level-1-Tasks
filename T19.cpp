#include <iostream>
using namespace std; 

int main()

{

    float L, B, circumference, basic;
cout << endl << endl;
    cout << "Enter the value of circumference of your circle: ";
    cin >> L;
cout << "\n";
cout << "_____________________________________________\n\n";
    
    B = 3.14;
    circumference = L * L;
    basic = B * 4;
    cout << "Area = " << circumference / basic << endl;
cout << endl << endl;

    return 0;

}