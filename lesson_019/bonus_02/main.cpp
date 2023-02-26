#include <iostream>
#include <fstream>
using namespace std;

/*
2. Se citesc numarul natural n si o secventa de n numere naturale din fisierul cresc_secv.in. Sa se afiseze
in fisierul cresc_secv.out “DA” daca sirul este ordonat crescator si “NU” altfel. (proiectul se va numi
cresc_secv)
*/

int main() {
    ifstream fin("../cresc_secv.in");
    ofstream fout("../cresc_secv.out");
    int n; // nr de elemente din sir
    fin >> n;

    int i;
    int val; // valorarea curenta din sir
    fin >> val;
    i = 1;
    int nextVal; // urmatoare valoare din sir
    int isAsc = 1; // presupunem sirul este crescator
    while (i < n) {
        fin >> nextVal;
        if (nextVal >= val) {
            val = nextVal;
            fin >> nextVal;
        } else {
            isAsc = 0;
            break;
        }
        i++;
    }
    fout << ((isAsc == 0) ? "NU" : "DA");
    return 0;
}
