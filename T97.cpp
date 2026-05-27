#include <iostream>
using namespace std;

void InputArray(int Hamada[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cin >> Hamada[i]; // ادخال عناصر الاراي
    }
}

void OutputArray(int Hamada[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << Hamada[i] << " ";
    }
}

int main()
{
    int N;
    cout << "Enter the length of the array: ";
    cin >> N;

    int Hamada[1000];
    InputArray(Hamada, N);
    OutputArray(Hamada, N);

    return 0;
}

