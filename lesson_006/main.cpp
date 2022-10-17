#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Introduceti numarul: ";
    cin >> a;

    int u, z,s,m;

    u = a%10;   // restul impartirii
    int tmp = a / 10;
    z = tmp%10; // eliminam ultima cifra si aflam restul impartirii la zeci
    s = a/100%10; // eliminam ultimele 2 cifre si aflam restul impartirii la sute
    m = a/1000%10; // eliminam ultimele 3 cifre si aflam restul impartirii la mii

    cout << "Cifra unitatilor numarului " << a << " este: " << u << endl;

    if (z >= 0) {
        cout << "Cifra zecilor numarului " << a << " este: " << z << endl;
    }
    if (s > 0) {
        cout << "Cifra sutelor numarului " << a << " este: " << s << endl;
    }
    if (m > 0) {
        cout << "Cifra miilor numarului " << a << " este: " << m << endl;
    }

    return 0;
}
