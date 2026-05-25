#include <iostream>
using namespace std;

int ReadNumberInput()
{
    cout << "Enter a maximum number: ";
    int N;
    cin >> N;

    return N;
}

int SummitionCounter(int N)
{
     int sum = 0;
    for (int i = 2; i <= N; i = i + 2)     
    {
        sum += i;
    }

    cout << "The sum = " << sum << endl;
    return sum;   
}

int main()
{
    SummitionCounter(ReadNumberInput());

    return 0;
}