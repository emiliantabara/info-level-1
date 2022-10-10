#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cout << "Introduceti numerele a si b: " << endl;

    cin >> a >> b;

    cout << "Suma numerelor este: " << (a + b) << endl;

    int d , c;

    cout << "Introduceti numerele d si c: " << endl;

    cin >> d >> c;

    cout << "Inmultirea numerelor este: " << (d * c) << endl;

    int e,f,g,r;

    cout << "Introduceti numerele e si f: " << endl;

    cin >> e >> f;

    r = e%f;

    e = f * g + r;

    cout << "Restul numerelor este: " << (e % f) << endl;

    cout << "Sper ca te-a ajutat!" << endl;

    return 0;
}
