#include <iostream>
#include <fstream>
using namespace std;

/*
2. Se citeste un numar natural n de maxim 17 cifre din fisierul repetat.in, sa se spuna
daca este format dintr-o singura cifra, repetata si sa se afiseze “DA” sau “NU” in fisierul
repetat.out.
*/


int main() {
    ifstream fin("../repetat.in");
    ofstream fout("../repetat.out");

    int n,u,inv;
    fin >> n;
    int copie_n = n;
    inv = 0;
    while (n != 0) {
        u = n % 10;
        inv = inv * 10 + u;
        n = n / 10;
    }
    if (copie_n != inv) {
        fout << "NU";
    }
    else {
        fout << "DA";
    }
    return 0;
}
