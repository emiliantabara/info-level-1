#include <iostream>
#include <fstream>
using namespace std;

//Se consideră n mulţimi. Fiecare mulţime conţine numai numere naturale consecutive. Pentru a indica o astfel de mulţime este suficient să dăm primul şi ultimul element din ea.
//Scrieţi un program care să determine elementele intersecţiei celor n mulţimi.

int main() {
    ifstream fin("../multimi.in");
    ofstream fout("../multimi.out");
    int n, cap, coada, i, capmax, coadamin;
    fin >> n;
    capmax = 0;
    coadamin = 30001; //din restrictii
    for (i = 0; i < n; i++) {
        fin >> cap >> coada;
        if (capmax < cap) {
            capmax = cap;
        }
        if (coadamin > coada) {
            coadamin = coada;
        }
    }
    for (i = capmax; i <= coadamin; i++) {
        fout << i << " ";
    }
    if (capmax > coadamin) {
        fout << "multimea vida";
    }
    return 0;
}
