#include <iostream>
using namespace std;

int main()

{
cout << "\n\n";
    float TotalBill, CashPaid;
    cout << "How much he paid ? ";
        cin >> CashPaid;
    cout << "And how much of TotalBill ? ";
        cin >> TotalBill;

cout << "\n\n";
cout << "__________________________" << endl << endl;

    cout << "You have to give him : " << CashPaid - TotalBill << "\n\n";

        return 0;

}