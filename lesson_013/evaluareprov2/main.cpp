#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin >> n;
    k = 1;
    int prod = k * (k+1);
    while (prod < n) {
        k++;
        prod = k * (k+1);
    }
    if (prod == n ) {
        cout << k << " " << k+1;
    }
    else{
        cout << "NU EXISTA!!";
    }

    return 0;
}
