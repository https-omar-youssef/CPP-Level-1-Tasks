#include <iostream>
using namespace std;

int main()

{
cout << "\n\n";

            float LoanAmount, MonthlyPayment;

    cout << "How much does the Loan Amount cost ? ";
        cin >> LoanAmount;
    cout << "And how much you well pay monthly ? ";
        cin >> MonthlyPayment;
cout << "\n";
cout << "_____________________________________\n\n";

    cout << "You have to pay alonge " << LoanAmount / MonthlyPayment << " month/s " << endl;
cout << "\n\n";

            return 0;
}