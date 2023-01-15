#include <iostream>

using namespace std;

/*
2. Se citeste un numar intreg i si un numar cu virgula d. Sa se afiseze mesajul “Numarul
        real transformat la intreg este:” + valoare si, pe randul urmator, “Numarul intreg
transformat la numar cu virgula este:” + valoare.
Exemplu: pt i = 14 și d = 6.34, se va afisa:
Numarul real transformat la intreg este: 6
Numarul intreg transformat la numar cu virgula este: 14
 */

int main() {
    int i;
    double d;
    cin >> i >> d;
    cout << "Nr real transformat la intreg este: " <<int(d) << endl;
    cout << "Nr intreg transformat la real este: " << double(i);
    return 0;
}
