#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

/*
1. Se citeste din fisierul radical.in un numar natural n. Sa se afiseze in fisierul
radical.out, radicalul lui n ca numar intreg (int). (proiectul se va numi radical)
!!! Trebuie sa folosim conversia explicita la intreg (int).
*/


int main() {
    ifstream fin("../radical.in");
    ofstream fout("../radical.out");
    int n;
    while (fin >> n) {
        fout << int(sqrt(n)) << endl;
    }
    return 0;
}
