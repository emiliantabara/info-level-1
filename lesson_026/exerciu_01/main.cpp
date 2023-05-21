#include <iostream>
using namespace std;

// Andrei lucrează într-un magazin de șosete, iar fiecare șosetă are asociat un numar întreg pentru a o identifica mai ușor din ce model face parte.
// Dându-se un vector neordonat de astfel de coduri, aflați câte perechi de șosete se pot forma.

int vf[101];

int main() {
    int n, val, nr_perechi;
    cin >> n;
    nr_perechi = 0;
    if (n > 100 || n < 0) {
        cout << "Alege un alt nr";
        return -1;
    }
    for (int i = 0; i < n; i++) {
        cin >> val;
        vf[val]++;
    }
    for (int i = 1; i < 101; i++) {
        nr_perechi = nr_perechi + vf[i] / 2;
    }
    cout << nr_perechi;
    return 0;
}