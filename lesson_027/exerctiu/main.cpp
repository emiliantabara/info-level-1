#include <iostream>
using namespace std;

int v[1001];

int main() {
    int n,p;
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = p; i < n-1; i++) {
        v[i] = v[i+1];
    }
    n = n-1;
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
