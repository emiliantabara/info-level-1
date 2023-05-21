#include <iostream>
using namespace std;

int v[100];

int main() {
    int n,k,i,j,x;
    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }
    k = k%n;
    for (j = 0; j < k; j++) {
        x = v[0];
        for (i = 0; i < n-1; i++) {
            v[i] = v[i+1];
        }
        v[n-1] = x;
    }
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
