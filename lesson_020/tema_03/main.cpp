#include <iostream>
#include <fstream>
using namespace std;

/*
2. Se citesc numarul natural n si o secventa de n numere naturale din fisierul maxim_secv.in. Sa se afiseze
in fisierul maxim_secv.out elementul maxim din secventa. (proiectul se va numi maxim_secv)
*/

int main() {
    ifstream fin("../maxim_secv.in");
    ofstream fout("../maxim_secv.out");
    int n, i, n_maxim, val;
    fin >> n;
    fin >> n_maxim; // pp ca maxim e primul element din sir
    for (i = 1; i < n; i++) {
        fin >> val;
        if (n_maxim < val) {
            n_maxim = val;
        }
    }
    fout << n_maxim;
    return 0;
}