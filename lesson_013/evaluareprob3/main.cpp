#include <iostream>

using namespace std;

// https://www.pbinfo.ro/probleme/65/produscifreimpare

int main() {
    int n, u, prod;
    cin >> n;

    bool toate_pare = true;

    prod = 1;
    while (n != 0) {
        u = n % 10;
        if (u % 2 == 1) {
            prod = prod * u;
            toate_pare = false;
        }
        n = n / 10;
    }
    if (toate_pare) {
        cout << "-1";
    }
    else {
        cout << prod;
    }
    return 0;
}
