#include <iostream>
#include <cmath>
using namespace std;

int main ()

{
cout << "\n\n";
    
                int a, b, c;
                float P, Area, B;
    cout << "Enter the first side of the triangle a: ";
        cin >> a;
    cout << "And the second one: ";
        cin >> b;
    cout << "And the third one: ";
        cin >> c;
cout << "\n";
cout << "____________________________________________\n\n";

            P = ( a + b + c ) / 2;
            B = 3.14;
            Area = B * pow((a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c))), 2);


    cout << "Area of circle = " << Area << endl << endl;

                return 0;

}