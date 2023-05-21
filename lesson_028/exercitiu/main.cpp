#include <iostream>
using namespace std;

int v[50];

int main() {
    int j,i,n,x,nrp;
    cin >> n;
    i = 0;
    nrp = 0;
    for (j = 0; j < n; j++) {
        cin >> x;
        if (x % 2 == 1) {
            v[i] = x;
            i++;
        }
        else {
            v[i] = x;
            v[i+1] = 2*x;
            i+=2;
            nrp++;
        }
    }
    n = n + nrp;

    for (j = 0; j < n; j++) {
        cout << v[j] << " ";
    }
    return 0;
}
