#include <iostream>

using namespace std;

int main() {
    int n, dp;
    cin >> n;
    dp = n / 2;
    while (n % dp != 0) {
        dp = dp - 1;
    }
    if (dp == 1) {
        cout << "Nu exista";
    } else {
        cout << dp;
    }
    return 0;
}
