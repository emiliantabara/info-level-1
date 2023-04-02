#include <iostream>
using namespace std;
/*
Se dă un vector cu n elemente numere naturale. Să se verifice dacă toate elementele vectorului sunt egale.
*/
int v[500];

int main() {
    int n,i,precedent;
    cin >> n;
    cin >> precedent;
    int egale = 0;
    for (i = 1; i < n; i++) {
        cin >> v[i];
        if (v[i] == precedent) {
            egale = 1;
        }
        else {
            cout << "NU";
            return 0;
        }
    }
    if (egale == 1) {
        cout << "DA";
    }
    return 0;
}
