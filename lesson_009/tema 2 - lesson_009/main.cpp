#include <iostream>

using namespace std;

int main()
{
    int n,sute,zeci,unitati;
    cin >> n;
    sute = n/100;
    zeci = n/10%10;
    unitati = n%10;
    if (sute==zeci && zeci==unitati) {
        cout << "Numarul are toate cifrele egale" << endl;
    }
    else {
        cout << "Numarul nu are toate cifrele egale" << endl;
    }
    cout << "Verificare" << endl;
    cout << "Sute: " << sute << " zeci: " << zeci << " unitati: " << unitati << endl;

    // Varianta multiplu de 111

    if (n % 111 == 0) {
        cout << "Numarul are toate cifrele egale" << endl;
    }
    else {
        cout << "Numarul nu are toate cifrele egale" << endl;
    }
    return 0;
}
