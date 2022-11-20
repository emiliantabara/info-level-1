#include <iostream>

using namespace std;

// Se dă un număr natural n. Afișați în ordine crescătoare numerele naturale pare nenule mai mici sau egale cu n.
// https://www.pbinfo.ro/probleme/3232/afisarenumerepare2

int main() {
    int n;
    cout << "Introduceti n: ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Nr n este invalid";
        return -1;
    }
    int x = 1;
    while (x <= n) {
        if (x % 2 == 0) {
            cout << x << " ";
        }
        x++;
    }

    return 0;
}
