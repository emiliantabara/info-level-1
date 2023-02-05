#include <iostream>
#include <fstream>

using namespace std;

/*
1. Pavaj: sa se paveze un dreptunghi cu patrate maximale. Se citesc a si b numere naturale
de maxim 9 cifre din fisierul pavaj.in, dimensiunile laturilor dreptunghiului, sa se
afiseze latura patratelor cele mai mari cu care putem acoperi dreptunghiul, precum si
numarul lor in fisierul pavaj.out.
*/

int main() {
    ifstream fin("../pavaj.in");
    ofstream fout("../pavaj.out");
    int a, b, L_patrat, A_patrat, A_dreptunghi, nr_patrate;
    fin >> a >> b;
    int copie_a, copie_b;
    copie_b = b;
    copie_a = a;
    A_dreptunghi = copie_b * copie_a;
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    cout << a;
    L_patrat = a;
    A_patrat = L_patrat * L_patrat;
    nr_patrate = A_dreptunghi / A_patrat;
    fout << L_patrat << " " << nr_patrate;
    return 0;
}
