#include <iostream>
#include <string>

using namespace std;

void MyName()
{

    string Name;

    cout << "Enter your name: ";
        //cin.ignore(1, '\n'); ملهاش لازمه بتتعمل لو في انبوت قبلها
        getline(cin, Name);
    cout << Name;

}

int main()
{

    MyName();

    return 0;

}