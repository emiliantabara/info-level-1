#include <iostream>
using namespace std;

double v[100];

int main() {
    int n,i,x;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(i = 0; i < n; i++) {
        x = (int)v[i];
        if (v[i]-x >= 0.5) {
            v[i] = x+1;
        }
        else {
            v[i] = x;
        }
    }
    for (i = n-1; i >= 0; i--) {
        cout << v[i] << " ";
    }


    return 0;
}
