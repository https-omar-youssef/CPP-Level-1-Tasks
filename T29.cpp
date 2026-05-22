#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n";
    bool A = 1, B = 0;
    cout << "12 >= 12 is " << (!(12 >= 12)) << endl;   // false (0)
    cout << (A && A) << "\n";                      // true (1)
    cout << ((7 == 7) && (7 > 5)) << "\n";           // false (0)
    cout << "12 > 7 is " << !(12 > 7) << endl; 
    cout << "true and false " << (A && B) << "\n";
    cout << "((7 == 7) && (7 < 5)) " << ((7 == 7) && (7 < 5)) << "\n";
    cout << "8 < 6 is " << !(8 < 6) << "\n";
    cout << "false or true " << (B || A) << endl;
    cout << ((7 == 7) || (7 < 5)) << "\n";
    cout << "8 = 8 is " << !(8 == 8) << "\n";
    cout << "false or false is " << (B || B) << "\n";
    cout << !((7 == 7) || (7 > 5)) << endl;
            return 0;
}
