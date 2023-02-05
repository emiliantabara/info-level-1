#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159265

/*
Cautati pe internet ce alte operatii mai putem folosi din biblioteca cmath si testati-le intr-un program C++.
*/

void test_functii_trig() {
    double alpha, alpha_2, result;
    cout << "Introduceti valuarea unghiurilor: ";
    cin >> alpha >> alpha_2;
    result = sin(alpha * PI / 180); //valoarea unghiului exprimata in radiani (1 rad = 180/PI)
    cout << result << endl;

    result = cos(alpha_2); // cos
    cout << result << endl;
}

void test_functii_alg() {
    double n, result, exp; //pow
    cout << "Introduceti numarul n si exp: ";
    cin >> n >> exp;
    result = pow(n, exp);
    cout << "pow: " << result << endl;

    cout << "Introduceti numarul n: ";
    cin >> n;
    double rezultat_l;
    rezultat_l = log2(n);
    cout << "log2: " << rezultat_l << endl;

    cout << "Introduceti numarul n: ";
    cin >> n;
    double rezultat_l10;
    rezultat_l10 = log10(n);
    cout << "log10: " << rezultat_l10;
}

int main() {
    test_functii_trig();
    test_functii_alg();
    return 0;
}
