#include <iostream>
#include <fstream>
using namespace std;

/*
1. Se citesc un numar natural n, un numar natural p si o secventa de n numere naturale din fisierul
cautare_secv.in. Sa se afiseze in fisierul cautare_secv.out pozitia pe care apare numarul p in secventa de n
elemente. Daca acesta nu apare deloc, se va afisa „Nu apare”. (Proiectul se va numi cautare_secv)
*/


int main() {
    ifstream fin("../cautare_secv.in");
    ofstream fout("../cautare_secv.out");
    int n, p;
    fin >> n;
    fin >> p;

    int i, val;
    int isFound = 0;
    i = 0;
    while (i < n) {
        fin >> val;
        if (p == val) {
            fout << i << " ";
            isFound = 1;
        }
        i++;
    }
    if (!isFound) {
        fout << "Nu apare!!";
    }
    return 0;
}
