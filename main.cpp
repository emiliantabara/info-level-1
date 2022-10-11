#include <iostream>

using namespace std;

int main()
{
    int x,z,u;

    cout << "Introduceti nr x: " << endl;

    cin >> x;

    z = x/10%10;
    u = x%10;

    cout << "Suma cifrelor este: " << (z+u);


    return 0;
}
