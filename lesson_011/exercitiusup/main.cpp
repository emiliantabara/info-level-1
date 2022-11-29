#include <iostream>

using namespace std;

int main() {
    int n, u, prod;
    cin >> n;
    prod = 1;
    while (n != 0) {
        u = n % 10;
        if (u % 2 == 1) {
            prod = prod * u;
        }
        n = n / 10;
    }
    cout << prod;
    return 0;
}
