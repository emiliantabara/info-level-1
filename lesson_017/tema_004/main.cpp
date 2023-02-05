#include <iostream>

using namespace std;

int main() {
    int a, b, divizori_a, divizori_b;
    divizori_a = a / 2;
    while (a % divizori_a == 0) {
        divizori_a--;
    }
    divizori_b = 2;
    while (b % divizori_b == 0) {
        divizori_b++;
    }
    cout << divizori_a + divizori_b;
}
