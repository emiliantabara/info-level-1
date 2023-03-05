#include <iostream>
#include <fstream>

using namespace std;

/*
1. Se citesc un numar natural n si o secventa cu n numere naturale din fisierul
nr_pare_secv.in. Sa se afiseze in fisierul nr_pare_secv.out numarul elementelor pare din secventa.
*/

int main() {
    ifstream fin("../nr_pare_secv.in");
    ofstream fout("../nr_pare_secv.out");
    int n, i, nr_elemente_pare, val;
    fin >> n;
    nr_elemente_pare = 0;
    for (i = 0; i < n; i++) {
        fin >> val;
        if (val % 2 == 0)
            nr_elemente_pare++;
    }
    fout << nr_elemente_pare;
    return 0;
}