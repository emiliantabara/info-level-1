#include <iostream>

using namespace std;

/*
1. Se considera un numar natural n mai mare strict decat 1000. Sa se afiseze numarul de
aparitii a cifrei sutelor in scrierea lui n.
Exemplu: n = 15535, se va afisa 3 (cifra sutelor, 5, apare de 3 ori).
n = 26143, se va afisa 1 (cifra sutelor, 1, apare o singura data).
*/
int main() {
    int n, s, nrs;
    cin >> n;
    if (n < 1000) {
        cout << "Numarul trebuie sa fie mai mare decat 1000!!";
        return -1;
    }

    // identificam cifra sutelor
    s = n / 100 % 10;
    nrs = 0;

    while (n != 0) {
        if (n % 10 == s) {
            nrs++;
        }
        n = n / 10;
    }
    cout << nrs;
    return 0;
}
