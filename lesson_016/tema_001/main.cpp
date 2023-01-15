#include <iostream>

using namespace std;

/*
1. Se citesc doua caractere de la tastatura. Ambele caractere citite trebuie sa fie cifre,
daca nu sunt cifre, se va afisa direct mesajul “Trebuie introduse doua cifre” si programul
nu va mai face alt pas. Sa se formeze cel mai mare numar care se poate obtine prin
combinarea celor doua caractere, sa se salveze intr-o variabila de tip intreg si sa se
afiseze.
Exemplu: pt caracterele citite 8 9, se va afisa 98.
 */

int main() {
    ushort a, b;
    int nr;
    cin >> a >> b;
    if (a >= 10 || b >= 10) {
        cout << "a si b trebuie sa fie cifre!!";
        return -1;
    }
    if (b > a) {
        nr = b * 10 + a;
    } else {
        nr = a * 10 + b;
    }
    cout << nr;
    return 0;
}
