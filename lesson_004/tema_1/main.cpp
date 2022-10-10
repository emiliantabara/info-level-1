#include <iostream>

using namespace std;

int main()
{

    // citirea datelor de intrare

    cout << "Introduceti cele doua nr.\n";

    int a,b;
    int c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    // calculam suma
    c = a + b;

    // afisare

    cout << "Suma lui " << a << " si " << b << " este: " << c;

    return 0;
}
