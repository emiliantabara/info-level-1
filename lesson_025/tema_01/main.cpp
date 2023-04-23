#include <iostream>
using namespace std;

/*Se dă un vector cu n elemente numere naturale. Să se verifice dacă are elementele ordonate crescător.*/

int v[500];

int main() {
    int n, i, crescator, precedent;
    cin >> n >> precedent;
    crescator = 0;
    for (i = 1; i < n; i++) {
        cin >> v[i];
        if (precedent <= v[i]) {
            crescator = 1;
        } else {
            cout << "NU";
            return 0;
        }
        precedent = v[i];
    }
    if (crescator == 1) {
        cout << "DA";
    }
    return 0;
}