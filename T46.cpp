#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float Calculat_Area()

{

    float a, d;
    float result;

    cout << "\n\n\n\n\nEnter the value of A: ";
        cin >> a;
    cout << "Enter the value of d: ";
        cin >> d;
    
    result = a * (sqrt(pow(d, 2) - pow(a, 2)));
cout << "\n************************************\n";
    return result;

}

int main()
{

    cout << "Area = " << Calculat_Area();

    return 0;

}