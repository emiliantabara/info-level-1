#include <iostream>
using namespace std;

/*Se dă un vector cu n elemente numere naturale. Să se verifice dacă are elementele ordonate crescător.*/

int v[500];

int main() {
    int n;
    bool crescator = false;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int precedent = v[0];
    for (int i = 1; i < n; i++) {
        if (precedent <= v[i]) {
            crescator = true;
        }
        else {
            crescator = false;
            break;
        }
        precedent = v[i];
    }
    crescator ? cout << "DA" : cout << "NU";
    return 0;
}