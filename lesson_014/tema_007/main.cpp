#include <iostream>

using namespace std;

/*
2. Fie k un numar natural mai mare decat 100. Sa se afiseze toate numerele mai mici sau
egale cu k care se termina in 5.
Exemplu:
k = 124
5 15 25 35 45 55 65 76 85 95 105 115
*/
int main() {
    int k, multiplu = 5;
    cin >> k;
    if (k < 100) {
        cout << "Nr trebuie sa fie mai mare decat 100!!";
        return -1;
    }
    while (multiplu <= k) {
        cout << multiplu << " ";
        multiplu = multiplu + 10;
    }
    return 0;
}
