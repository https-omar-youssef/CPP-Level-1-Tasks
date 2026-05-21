#include <iostream>
using namespace std;

int main()

{
cout << "\n\n";

                int Days, Hours, Minutes, Seconds, TotalSeconds, remainder;
    cout << "How much seconds did you work ? ";
        cin >> TotalSeconds;

cout << "\n";
cout << "______________________________________\n\n";

            Days = TotalSeconds / (24 * 60 * 60);
            remainder = TotalSeconds % (24 * 60 * 60);
            Hours = remainder / (60 * 60);
            remainder = remainder % (60 * 60);
            Minutes = remainder / 60;
            remainder = remainder % 60;
            Seconds = remainder;
    
    cout << "You had been working for: " << Days << " days \n";
    cout << "And for: " << Hours << " hours " << endl ;
    cout << "And: " << Minutes << " minutes \n";
    cout << "And: " << Seconds << " seconds " <<endl;
cout << "\n";
cout << "_____________________________________\n\n";
                return 0;

}