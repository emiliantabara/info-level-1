#include <iostream>
#include <fstream>
using namespace std;
/*
3. Se citesc un numar natural n si o secventa de n numere naturale din fisierul zero_secv.in. Sa se afiseze
in fisierul zero_secv.out cate elemente din secventa sunt egale cu zero si cate diferite de zero. (Proiectulse va numi zero_secv)
*/

int main() {
    ifstream fin("../maxim_secv.in");
    ofstream fout("../maxim_secv.out");
    int n, i, nr_egal0, nr_diferit0,val;
    fin >> n;
    i = 0;
    nr_diferit0 = 0;
    nr_egal0 = 0;
    while (i < n) {
        fin >> val;
        if (val == 0) {
            nr_egal0++;
        } else {
            nr_diferit0++;
        }
        i++;
    }
    fout << nr_egal0 << " " << nr_diferit0;
    return 0;
}
