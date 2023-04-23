#include <iostream>

using namespace std;

int v[1000000];

int main() {
    int n, i, max_prim, aparitii;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }
    max_prim = -1;
    for (i = 0; i < n; i++) {
        if (v[i] == 2 || v[i] == 3 || v[i] == 5 || v[i] == 7) {
            if (v[i] > max_prim) {
                max_prim = v[i];
            }
        }
    }
    aparitii = 0;
    for (i = 0; i < n; i++) {
        if (v[i] == max_prim) {
            aparitii++;
        }
    }
    if (max_prim == -1) {
        cout << "nu exista";
    }
    else {
        cout << max_prim << " " << aparitii;
    }
    return 0;
}
