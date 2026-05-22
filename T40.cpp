#include <iostream>
#include <string>

using namespace std;


int main()

{

    int Number;
    string Name;
    string phone_number;


    cout << "\n\nHow much employee are in your job? ";
        cin >> Number;
    cout << "What is your name? ";
        cin.ignore(1, '\n'); // this function to not make IDE think that my click on enter is an input ,becouse this syntex  (getline)
        getline(cin, Name);
    cout << "Enter you phone number: ";
        cin >> phone_number;

    cout << endl << endl << "you work with " << Number << " employee " << ", Name: " << Name << ", phone number: " << phone_number << "\n\n\n\n\n" ;

        return 0;

}