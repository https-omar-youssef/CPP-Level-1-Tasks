#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main ()
{

    int Grades[3];

    cout << "Enter garde 1: ";
        cin >> Grades[0];
    cout << "Enter grade 2: ";
        cin >> Grades[1];
    cout << "Enter grade 3: ";
        cin >> Grades[2];
    cout << "*********************************************\n";

    float Ave = (Grades[0] + Grades[1] + Grades[2]) / 3.00;
    cout << "The avarage of your grades = " << Ave << endl;
}