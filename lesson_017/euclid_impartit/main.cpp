#include <iostream>

using namespace std;

int main() {
    int a, b, copie_a;
    cin >> a >> b;
    while (b != 0) {
        copie_a = a;
        a = b;
        b = copie_a % b;
    }
    cout << a;
    return 0;
}
