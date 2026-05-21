#include <iostream>
using namespace std;

int main()

{
cout << endl;

    int Penny, Nichel, Dime, Quarter, Doller, TotalPenneies;
    double TotalDollers;
    cout << "How much pennies do you have ? ";
        cin >> Penny;
    cout << "And Nichels ? ";
        cin >> Nichel;
    cout << "And Dimes ? ";
        cin >> Dime;
    cout << "And Quarters ? ";
        cin >> Quarter;
    cout << "And Dollers ? ";
        cin >> Doller;
cout << "\n";
cout << "_________________________\n\n";

            //Nichel = 5 * Penny;
            //Dime = 10 * Penny;
            //Quarter = 25 * Penny;    // مش هينفع نعمل الفاريابلز دي عشان هو كده مش هيفهم لما تحط
            //Doller = 100 * Penny;    // اي قيمة لاي عدد منهم تاني هو بس هيستعمل البيني عشان انت معرفهم بيها
            TotalPenneies = Penny + (Nichel * 5) + (Dime * 10) + (Quarter * 25) + (Doller * 100; // thats the true code
            TotalDollers = TotalPenneies / 100;
    cout << "Total Penneies = " << TotalPenneies << endl;
    cout << "Total Dollers = " << TotalDollers << endl;
cout << "\n\n";

            return 0;

}