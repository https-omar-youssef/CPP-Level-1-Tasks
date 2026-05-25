#include <iostream>
using namespace std;

enum enOperatingType {devided = 1 ,Multiplication = 2 , Addition = 3 , Subtraction = 4 , remainder = 5};

int main ()
{
    int num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << endl;
    
    cout << "====================================\n";
    cout << "(1) devided \n";
    cout << "(2) Multiplication \n";
    cout << "(3) Addition \n";
    cout << "(4) Subtraction \n";
    cout << "(5) remainder \n";
    cout << "====================================\n";
    cout << "Choose an operator: ";
    
    int op;
    enOperatingType Operator;
    
    cin >> op;
    Operator = (enOperatingType)op;

    switch (Operator)
    {
    case 1:
        cout << "The devided of the two numbers = " << num1 / num2 ;
        break;
    case 2:
        cout << "The Multiplication of the two numbers = " << num1 * num2;
        break;
    case 3:
        cout << "The Addition of the two numbers = " << num1 + num2;
        break;
    case 4:
        cout << "The Subtraction of the two numbers = " << num1 - num2;
        break;
    case 5:
        cout << "The remainder of the two numbers = " << num1 % num2;
        break;
    
    default:
        cout << "Choise a correct operator or Enter a integer number .... " << endl;
        break;
    }

    return 0;

}