#include <iostream>

using namespace std;

int main() {
    int n, p, c, cres, i;
    cin >> n;
    cin >> p;
    cres = 1;
    i = 1;
    while (i < n) {
        cin >> c;
        if (c < p) {
            cres = 0;
        }
        p = c;
        i++;
    }
    if (cres == 1) {
        cout << "Da!";
    } else {
        cout << "Nu!";
    }
    return 0;
}