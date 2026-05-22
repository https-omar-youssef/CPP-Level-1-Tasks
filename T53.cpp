#include <iostream>
#include <string>

using namespace std;

int x = 800;

void MyFunction()
{

    int x = 100;

    cout << "The value of number x is: " << x << endl;

}

int main()
{
    int x = 300;

    cout << "The value of number x is: " << x << endl;
    MyFunction();

    cout << "The value of global integer x is: " << ::x << endl;
}