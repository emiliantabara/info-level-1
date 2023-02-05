#include <iostream>
#include <cmath>

using namespace std;

/*
1. Se citesc doua numere intregi de maxim 9 cifre. Sa se spuna cate patrate perfecte sunt intre a si b, inclusiv a si b.
*/

int main() {
    int a, b;
    cin >> a >> b;
    // verificam 0 < a < b < 999999999 cifre

    int pp_counter = 0;
    double rad_a;
    rad_a = sqrt(a);
    int k = (int) rad_a;
    if (k * k < a) {
        k++;
    }
    while (k * k <= b) {
        cout << "Am gasit: " << k * k << endl;
        pp_counter++;
        k++;
    }

    cout << "Total: " << pp_counter;
    return 0;
}
