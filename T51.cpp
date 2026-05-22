#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double Seconds_of_task()

{

    float days, hours, minutes, seconds, sum;

    cout << "The days you worked on the task: ";
        cin >> days;
    cout << "Hours: ";
        cin >> hours;
    cout << "Minutes: ";
        cin >> minutes;
    cout << "Seconds: ";
        cin >> seconds;

    sum = seconds + (minutes * 60) + (hours * 60 * 60) + (days * 60 * 60 * 24);

    cout << "You spent " << sum << " second on your task" << endl;

        return sum;

}

int main()

{

    Seconds_of_task();

        return 0;

}