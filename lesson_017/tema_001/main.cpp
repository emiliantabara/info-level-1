#include <iostream>

using namespace std;

int main() {
    int k, n;
    cin >> n >> k;
    if (k > n) {
        return -1;
    }
    int nr = 1;
    int putere = 0;
    while (nr <= n) {
        int copie_nr = nr;
        while (copie_nr % k == 0) {
            copie_nr = copie_nr / k;
            putere++;
        }
        nr = nr + 1;
    }
    cout << putere;
    return 0;
}
