#include <iostream>
#include <cmath>
using namespace std;

int main()

{
cout << "\n\n";

            float a, d;
    cout << "Enter the value of width: ";
        cin >> a;
    cout << "Enter the value of diameter: ";
        cin >> d;
cout << endl;
cout << "_______________________________________________________\n\n";
    
    cout << "Area = " << a * (sqrt(pow(d, 2) - pow(a, 2)));
cout << endl << endl << endl;

            return 0;

}