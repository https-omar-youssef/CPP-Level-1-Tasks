#include <iostream>
using namespace std;

int main()

{

    
    cout << "\n\n";
            cout << "Enter the hight of diameter: ";
            float D, B, temp, Area;
            D = 3.14;
            cin >> B;
    cout << "\n";
    cout << "_____________________________" << endl << endl;

            temp = D * B * B;
            Area = temp / 4;
            
            cout << "| ";
            cout << "the Area = " << Area ;
            cout << " |" << endl;

    cout << "______________________________" << endl;
    cout << "\n\n";


        return 0;

}