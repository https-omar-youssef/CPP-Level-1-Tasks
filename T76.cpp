#include <iostream>
using namespace std;

/*outside loop = الأعمدة 
inside loop = الصفوف */

int main()
{
    for (int i = 1; i <=10; i++)
    {
        for (int j = 10; j <= i; j--)
        {
            cout << "*";   
        }
        cout << endl;
    }
    return 0;
}

