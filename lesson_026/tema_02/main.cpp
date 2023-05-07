#include <iostream>
#include <fstream>

using namespace std;

int fn[10], fm[10];

int main() {
    ifstream fin("../cfcomune.in");
    ofstream fout("../cfcomune.out");
    int n, m, c, comune, i;
    fin >> n >> m;
    while (n != 0) {
        c = n % 10;
        fn[c] = 1;
        n = n / 10;
    }
    while (m != 0) {
        c = m % 10;
        fm[c] = 1;
        m = m / 10;
    }
    comune = 0;
    for (i = 0; i < 10; i++) {
        if (fn[i] > 0 && fm[i] > 0) {
            comune++;
        }
    }
    fout << comune;
    return 0;
}
