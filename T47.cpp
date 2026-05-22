#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float Calculat_Area()

{

    float r, b, result;
            b = 3.14;
    cout << "\n\n\nEnter the value of r: ";
        cin >> r;
cout << "\n**************************\n";

        return b * pow(r, 2);

}

float Calculat_Area_Circule()
{

    float D, b;
            b = 3.14;
    cout << "\n\n\nEnter the value of D: ";
        cin >> D;
cout << "\n**************************\n";

                return (b * pow(D, 2)) / 4;

}
int main()
{

    cout << "Area = " << Calculat_Area();
    cout << "Area2 = " << Calculat_Area_Circule(); 
            return 0;

}