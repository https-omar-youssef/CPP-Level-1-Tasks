#include <iostream>
#include <string>
using namespace std;


int main()

{

    string St1 = "43.22";
    int N1 = 20;
    float N2 = 33.5;
    float N3 = 55.23;

    int n1;
    float n2;
    double n3;

    n1 = stoi(St1);
    n2 = stof(St1);
    n3 = stod(St1);

    cout << n1 << " " << n2 << " " << n3 << endl;

    string st1;
    string st2;
    string st3;
    st1 = to_string(N1);
    st2 = to_string(N2);
    st3 = to_string(N3);
    
    cout << st1 << " " << st2 << " " << st3 << endl;

    int Num1;
    double N3;

    Num1 = N3;
    Num1 = (int)N3;
    Num1 = int (N3);

    return 0;
}


