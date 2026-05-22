#include <iostream>
#include <string> 

using namespace std;

int CalculatingArea()
{

    int A, B, result;

    cout << "\n\n\n\n\nEnter the value of the A: " ;
        cin >> A;
    cout << "Enter the value of the B: " ;
        cin >> B;
cout << "\n*************************************\n";
        result = A * B;
    return result;
}

int main()
{

    cout << "Area = " << CalculatingArea();

        return 0;

}
