#include <iostream>
using namespace std;

struct DataVariabels
{
    int arr[1000];
    int sum = 0, max, min, N;
    bool sure;
};

void ArrayData(DataVariabels &Data)
{
    cout << "How many items will be in the array: ";
    cin >> Data.N;
}

void ArrayItems(DataVariabels &Data)
{
    cout << "Enter the items: ";
    for (int i = 0; i < Data.N; i++)
    {
        cin >> Data.arr[i];
    }
}

void CalculatMaxMin(DataVariabels &Data)
{
    for (int j = 0; j < Data.N; j++)
    {
        if (j == 0 || Data.arr[j] > Data.max)
        {
            Data.max = Data.arr[j];
        }
        if (j == 0 || Data.arr[j] < Data.min)
        {
            Data.min = Data.arr[j];
        }
    }
}

int main()
{
    DataVariabels Data;
    ArrayData(Data);
    ArrayItems(Data);
    CalculatMaxMin(Data);
    cout << "The maximum is " << Data.max;
    cout << endl << "The minimum is " << Data.min;
}



