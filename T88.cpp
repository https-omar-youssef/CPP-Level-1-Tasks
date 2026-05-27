#include <iostream>
using namespace std;

 

int main()
{
    int arr[10] = {10, 20, 50, 55, 88, 84, 65, 50, 89, 51};
    
    for (int i = 0; i <= 10; i++)
    {
        if (arr[i] == 20)
        {
            cout << "The number 20 take the position number " << i + 1 << " in the array " << endl;
                break;
        }
        
    }
    return 0;
}
