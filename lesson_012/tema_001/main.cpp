#include <iostream>
using namespace std;
/*
1. Se citește un numar natural n. Sa se afiseze lista de divizori ai lui n, pe acelasi
rand, cu un spatiu intre valorile afisate (inclusiv 1 si el insusi vor fi luati în calcul).
Nume proiect C++ lista_divizori
Exemplu: pt n = 12, se va afisa 1 2 3 4 6 12
*/

int main() {
    int n,d;
    cin >> n;
    d = 1;
    while (d <= n) {
        if (n%d == 0) {
            cout << d << " ";
        }
        d++;
    }
    return 0;
}
