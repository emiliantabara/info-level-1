#include <iostream>

using namespace std;

int v[200];

int main() {
    int n, i, suma;
    cin >> n;
    suma = 0;
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (i = 0; i < n; i++) {
        suma = suma + v[i];
    }
    cout << suma;
    return 0;
}
