#include <iostream>
using namespace std;
int main() {
    int n, k, p;
    cin >> n;
    k = 2;
    while (n != 1) {
        p = 0;
        while (n % k == 0) {
            n = n/k;
            p = p+1;
        }
        k++;
    }
    if (p == 5) {
        cout << "DA";
    }
    else {
        cout << "NU";
    }


    return 0;
}
