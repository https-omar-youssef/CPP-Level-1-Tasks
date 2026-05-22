#include <iostream>
#include <string>

using namespace std;

void MyFunction(int &num1, int &num2)
{

    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swap inside the fuction num1 = " << num1 << " and num2 = " << num2 << endl;


}

int main()
{

    int num1, num2;

    cout << "Enter the first number: ";
        cin >> num1;
    cout << "Enter the second number: ";
        cin >> num2;

        cout << "Before swaping in main function num1 = " << num1 << " and num2 = " << num2 << endl;

    MyFunction(num1 , num2);

        cout << "After swaping in main function num1 = " << num1 << " and num2 = " << num2 << endl;
    

        return 0;
}
