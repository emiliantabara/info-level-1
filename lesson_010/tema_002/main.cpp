#include <iostream>
using namespace std;

// Se dă un număr natural nenul n. Să se elimine din n toate zerourile cu care se termină n.
// https://www.pbinfo.ro/probleme/3932/stergezerouri

int main() {
    int n;
    cout << "Introduceti n: ";
    cin >> n;

    // daca nr nu se termina in 0, afiseaza nr initial
    if (n%10 == 1) {
        cout << n;
        return 0;
    }

    while (n > 0 && n % 10 == 0) {
        n = n / 10;
    }
    cout << "Nr rezultat este: " << n;
    return 0;
}
