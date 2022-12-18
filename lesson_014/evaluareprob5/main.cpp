#include <iostream>

using namespace std;

// https://www.pbinfo.ro/probleme/2616/paznici1

int main() {
    int n, m, nr_paznici;
    cin >> n >> m;
    int l = 1; // linia curenta
    int c = 1; // coloana curenta
    nr_paznici = 0;
    while (l <= n) {
        while (c <= m) {
            nr_paznici++;
            c = c + 2;
        }
        // avansam la urmatoarea linie impara
        l = l + 2;
        // revenim la coloana 1
        c = 1;
    }
    cout << nr_paznici;
    return 0;
}
