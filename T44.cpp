#include <iostream>
#include <string>

using namespace std;


void Swape()
{

    int Num1, Num2, Temp;

    cout << "Enter the first number: ";
        cin >> Num1;
    cout << "Enter the second number: ";
        cin >> Num2;

    cout << "\nYour first number is " << Num1 << " And the second is " << Num2 << endl;

     Temp = Num1; // Temp = 5
     Num1 = Num2; // Num1 = 10
     Num2 = Temp; // Num2 = 5

        cout << Num1 << "\n" << Num2;
    
}

int main()
{

     Swape();

    return 0;

}