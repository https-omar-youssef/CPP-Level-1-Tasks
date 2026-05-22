#include <iostream>
#include <string>

using namespace std;

int Myfunction()

{

    int Num1, Num2;

    cout << "\n\n\n\n\nEnter the first number: " ;
        cin >> Num1;
    cout << "Enter the second number: " ;
        cin >> Num2;
cout << "\n***************************************\n";

    return Num1 + Num2;

}

int main()

{
    
    cout << Myfunction();
    return 0;

}