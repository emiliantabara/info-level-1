#include <iostream>
using namespace std;

/*
1. Se citeste un numar natural n. Sa se afiseze “DA” daca numarul este palindrom si “NU”
altfel.
Definitie: un numar este palindrom daca este egal cu inversul sau.
De exemplu, 1221, 111, 757 sunt numere palindrom, in timp ce 1231, 67, 9797 nu sunt numere
        palindrom.
Atentie!! Dupa ce calculati inversul lui n intr-o variabila, tineti cont de cat devine n.

*/

int main() {
    int n;
    cin >> n;

    // salvam valoarea lui "n" initiala
    int n_initial = n;

    int inv = 0; // nr "n" inversat
    int u;
    while (n != 0) {
        u = n%10;
        inv = inv * 10 +u;
        n = n/10;
    }
    // verificam valoare lui n este identica cu inversul
    if (n_initial == inv) {
        cout << "DA";
    }
    else {
        cout << "NU";
    }
    return 0;
}
