#include <iostream>

using namespace std;

int main() {
    int n, d, nrd;
    cin >> n;
    d = 2;
    nrd = 0;
    while (d <= n / 2) {
        if (n % d == 0) {
            nrd = nrd + 1;
        }
        d = d + 1;
    }
    if (nrd == 0 && n > 1) {
        cout << "Nr " << n << " este prim!";
    } else {
        cout << "Nr " << n << " nu este prim!";
    }
    return 0;
}