#include <iostream>
#include <string>
using namespace std;

void ReadGrades(float Grades[3])
{
    
    cout << "Enter garde 1: ";
        cin >> Grades[0];
    cout << "Enter grade 2: ";
        cin >> Grades[1];
    cout << "Enter grade 3: ";
        cin >> Grades[2];
    cout << "*********************************************\n";
};

float Avarage(float Grades[3])
{
       return (Grades[0] + Grades[1] + Grades[2]) / 3;
};

int main () 
{
    float Grades[3];
    
    ReadGrades(Grades);
    Avarage(Grades);
    
    cout << "Your avareged = " << Avarage(Grades) << endl;

    return 0;

}