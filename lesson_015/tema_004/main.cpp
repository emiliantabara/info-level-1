#include <iostream>
#include <fstream>
using namespace std;

// Pentru un număr dat x, considerăm următoarele noțiuni:

// oglinditul lui x reprezintă numărul scris cu cifrele lui x în ordine inversă;
// urma lui x reprezintă diferența dintre numărul format cu atâtea cifre de 9 câte cifre are x și numărul x;
// numărul x este curat dacă oglinditul său este egal cu urma sa. De exemplu, 27 este un număr curat.

int oglindit(int nr_initial){
    int nr_oglindit = 0;
    int cifra;
    while (nr_initial != 0) {
        cifra = nr_initial % 10;
        nr_oglindit = nr_oglindit * 10 + cifra;
        nr_initial = nr_initial / 10;
    }
    return nr_oglindit;
}

int urma(int nr_initial){
    int nr_cifre = 0;
    int tmp = nr_initial;
    int urma = 0;

    // numaram cifrele
    while (nr_initial != 0) {
        nr_cifre++;
        nr_initial = nr_initial / 10;
    }

    // construim urma numarului initial
    while (nr_cifre != 0) {
        urma = urma * 10 + 9;
        nr_cifre--;
    }
    urma = urma - tmp;
    return urma;
}

int main() {
    ifstream in ("../nrcurat.in");
    ofstream out ("../nrcurat.out");

    int x,nr_oglindit,nr_urma;
    in >> x;

    nr_oglindit = oglindit(x);
    nr_urma = urma(x);

    cout << nr_oglindit;
    cout << nr_urma;
    if (nr_oglindit == nr_urma){
        out <<" 1 " << " ";
    }
    else{
        out <<" 0 "<< " ";
    }
    return 0;
}
