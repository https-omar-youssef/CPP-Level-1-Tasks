#include <iostream>
#include <string>
#include <cmath>

using namespace std;


float C_Area()
{

    float A, b, result1, L, result2;
    b = 3.14;

    cout << "Enter the value of A: ";
        cin >> A;

    result1 = (b * pow(A, 2)) / 4;

        cout << "Area = " << result1 << endl;

    cout << "Enter the value of L: ";
        cin >> L;

    result2 = pow(L, 2) / (b * 4);

    cout << "Area = " << result2 << endl;
    return result1;
    return result2;
}


int main()

{

    C_Area();

        return 0;

}
