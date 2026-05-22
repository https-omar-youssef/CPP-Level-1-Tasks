#include <iostream>
using namespace std;
enum Color {blue = 1, yellow = 2, green = 3, perpel = 4};

int main()

{

    Color MyFavoriteColor;
        MyFavoriteColor = Color::perpel;    
    cout << "My favorite color is: " << MyFavoriteColor << endl;

    return 0;

}