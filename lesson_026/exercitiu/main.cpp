#include <iostream>
using namespace std;

int f[10];

int main() {
    int n, c, i;
    cin >> n;
    while (n > 0) {
        c = n % 10;
        f[c]++;
        n = n / 10;
    }
    for (i = 0; i < 10; i++) {
        cout << i << " " << f[i] << endl;
    }
    int nrcd = 0;
    for (i = 0; i < 10; i++) {
        if (f[i] > 0) {
            nrcd++;
        }
    }
    cout << nrcd;
    return 0;
}
