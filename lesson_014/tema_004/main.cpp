#include <iostream>

using namespace std;

/*
2. Ana adora numerele care contin 11. Pentru un numar natural de maxim 2.000.000.000, sa se
spuna cati de 11 apar.
Exemplu:
34111511
se va afisa: 3 (pentru ca 11 apare astfel: 34111511, 34111511, 34111511 )
111111
se va afisa: 5 (pentru ca 11 apare astfel: 111111, 111111, 111111, 111111, 111111)
*/

int main() {
    int n, cifre_11, nr_11;
    cin >> n;
    if (n > 2000000000) {
        cout << "Nr introdus este invalid";
        return -1;
    }

    nr_11 = 0;
    while (n != 0) {
        cifre_11 = n % 100;
        if (cifre_11 == 11) {
            nr_11++;
        }
        n = n / 10;
    }
    cout << "Nr de aparitii pentru `11`: " << nr_11;
    return 0;
}
