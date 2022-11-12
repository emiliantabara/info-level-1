#include <iostream>

using namespace std;

int main()
{
    int n,s,z,u;
    cin >> n;
    s = n/100;
    z = n/10%10;
    u = n%10;
    if (s%2 == 1 && s==z) {
        s = z;
    }
    if (z%2 == 1 && z==u) {
        s=z=u;
        cout << "Numarul are toate cifrele egale";
    }
    else {
        cout << "Numarul nu are toate cifrele egale";
    }
    return 0;
}
