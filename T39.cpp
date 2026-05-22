#include <iostream>
#include <string>
using namespace std;

int main ()

{


    
cout << "\n\n\n";
    
            string Name, Number1, Number2;
    cout << "Enter the first string: " ; // Enter your full name
        getline(cin, Name);
    cout << "Enter the second string: " ; // Enter a number
        cin >> Number1;
    cout << "Enter the third string: "; // Enter a number
        cin >> Number2; 

cout << "\n*************************************************\n\n";
    cout << "The lenghth of first sting is " << Name.length() << endl;
    cout << "Charachtars at 0,2,4,7 are: " << Name[0] << " " << Name[2] << " " << Name[4] << " " << Name[7] << endl;
    cout << "Concatonating of second string and of third string = " << Number1 + Number2 << "\n";
    
    int Result = stoi(Number1) * stoi(Number2);
    cout << stoi(Number1) << " * " << stoi(Number2) << " = " << Result << "\n\n\n\n";


    
        return 0;

}

    