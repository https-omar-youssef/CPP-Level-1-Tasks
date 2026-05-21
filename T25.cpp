#include <iostream>
using namespace std;

int main()

{
cout << "\n\n";

            float Days, Hours, Minutes, Seconds;
    cout << "How much of days did you work on your task ? ";
        cin >> Days;
    cout << "And hours ? ";
        cin >> Hours;
    cout << "And minutes ? ";
        cin >> Minutes;
    cout << "And seconds ? ";
        cin >> Seconds;

cout << "\n\n";
cout << "______________________________" << endl << endl;

    cout << "You had been working for " << Seconds + (Minutes * 60 ) + (Hours * 60 * 60 ) + (Days * 24 * 60 * 60 ) << " seconds";
cout << "\n\n";

            return 0;

}