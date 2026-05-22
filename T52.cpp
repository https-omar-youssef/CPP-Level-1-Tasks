#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void Seconds_of_task()

{

        int total, days, hours, minutes, seconds, remainder;

    cout << "How much of seconds did you spend on your task: ";
        cin >> total;


        days = total / (24* 60 * 60);
        remainder = total % (24 * 60 * 60);
        hours = remainder / (60 * 60);
        remainder = remainder % (60 * 60);
        minutes = remainder / 60;
        remainder = remainder % 60;
        seconds = remainder;


    cout << "you spent: " << days << " day and " 
         << hours << " hours and " 
         << minutes << " minute and " 
         << seconds << " second on your task. "
         <<  endl;

    
     
}

int main()

{

    Seconds_of_task();

        return 0;

}
    