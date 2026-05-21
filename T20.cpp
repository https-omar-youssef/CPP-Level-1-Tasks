#include <iostream>
using namespace std;

int main()

{
cout << endl << endl;
    float B, a, c, temp1, temp2;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of c: ";
    cin >> c;

            B = 3.14;
            temp1 = (B * c * c) / 4;
            temp2 = (2 * a - c) / (2 * a + c);
cout << endl ;
cout << "___________________________\n\n";

    cout << "Area = " << temp1 * temp2 << endl ;
cout << "\n\n";

            return 0;

}