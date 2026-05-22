#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float Area()
{

    float a, b, T, result1;
        T = 3.14;
    cout << "Enter the value of a: ";
        cin >> a;
    cout << "Enter the value of b: ";
        cin >> b;

        result1 = T * (pow(b, 2) / 4) * ((2 * a - b ) / (2 * a + b));

    cout << "Area = " << result1;

        return result1;

}

int main()

{

    Area();

    return 0;

}