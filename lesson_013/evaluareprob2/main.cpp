#include <iostream>

using namespace std;

// https://www.pbinfo.ro/probleme/452/cifimp

int main() {
    int n, u, nri;
    cin >> n;
    if (n > 1000 || n < 100) {
        cout << "Numarul trebuie sa fie de 3 cifre!!";
        return -1;
    }

    while (n != 0) {
        u = n % 10;
        if (u % 2 == 1) {
            nri++;
        }
        n = n / 10;
    }
    cout << nri;
    return 0;
}