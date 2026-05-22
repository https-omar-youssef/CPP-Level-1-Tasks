#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float Area()
{

    float a, b, c, p, T, result;
        T = 3.14;
    cout << "Enter the value of a: ";
        cin >> a;
    cout << "Enter the value of b: ";
        cin >> b;
    cout << "Enter the value of c: ";
        cin >> c;

    p = (a + b + c) / 2;

    result = T * pow((a * b * c / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2);

    cout << "Area = " << result << endl;

    return result;

}

int main()

{

    Area();

    return 0;

}

    
    
