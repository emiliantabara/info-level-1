#include <iostream>

using namespace std;

/////////////////////////////////////////////////
// Suma cifrelor unui numar natural de 2 cifre //
/////////////////////////////////////////////////
int main()
{
    int a,S,z,u;
    cout << "Introduceti numarul a: " << endl;
    cin >> a;
    z = a / 10;
    u = a % 10;
    S = z + u;
    cout << "Suma cifrelor este: " << S;
    return 0;
}
