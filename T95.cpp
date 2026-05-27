#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter How much items you want in the Array: ";
    cin >> N;  
    int arr[N];
    cout << "Enter the numbers: ";
    for (int i = 0; i < N; i++) 
    {
        cin >> arr[i];  
    }

    int L, R, sum=0;
    cout << "Enter the limit: ";
    cin >> L >> R;

    for (int i = (L - 1); i <= (R-1); i++)
    {
        sum += arr[i];
    }
    cout << "SUM = " << sum;
}