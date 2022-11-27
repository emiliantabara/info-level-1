#include <iostream>

using namespace std;

/*
2. Se citesc doua numere naturale n si k. Sa se afiseze a k-a cifra de la coada a lui n .
Cu alte cuvinte vom numara cifrele de la coada numarului n, mergand de la dreapta la
        stanga.
Exemple: n = 58939, k = 4 vom afișa 8, deoarece a 4-a cifră de la dreapta la stânga este 4
n = 345432, k = 2, vom afișa 3;
n = 54 și k = 1 vom afișa 4.
Obs: stim ca variabila k nu poate lua decat valori mai mici sau egale cu numarul cifrelor
lui n.
*/

int main() {
    int n, k;
    cin >> n >> k;
    if (k > 10) {
        cout << "Nr. k = " << k << " este invalid!" << endl;
        return -1;
    }

    // prima pozitie de la dreapta la stanga
    int i = 1;
    int nr_initial = n;
    while (i < k) {
        n = n / 10;
        i++;
    }
    int cif = n % 10;
    cout << "Cifra " << k << " din nr " << nr_initial << " este: " << cif;
    return 0;
}
