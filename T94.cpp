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
    
    int evencount = 0;
    int oddcount = 0; 
    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }

    cout << "EVEN = " << evencount << endl;
    cout << "ODD = " << oddcount << endl;
    
}
