#include <iostream>

using namespace std;
// Se citeste un numar natural n strict mai mic decat 100. Sa se afiseze „DA” daca are toate
// cifrele impare si „NU” altfel.
int main()
{
    int n, zeci, unitati;
    cin >> n;

    if (n >= 100){
        cout << "Nr. introdus este invalid";
        return -1;
    }

    zeci = n/10;
    unitati = n%10;

    if (n < 10 && unitati % 2 == 1) {
        cout << "DA";
    }
    else {
        // numar de 2 cifre, zeci impare, unitati impare
        if (n >= 10 && unitati % 2 == 1 && zeci % 2 == 1) {
            cout << "DA";
        }
        else {
            cout << "Nu";
        }
    }
    return 0;
}
