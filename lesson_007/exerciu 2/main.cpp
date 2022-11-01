#include <iostream>

using namespace std;

int main()
{
    int x,u,z,s,m;

    cout << "Introduceti nr x: " << endl;

    cin >> x;

    u = x%10;
    z = x/10%10;
    s = x/100%10;
    m = x/1000;

    cout << "produsul cifrelor este: " << (u*z*s*m);








    return 0;
}
