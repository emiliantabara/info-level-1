#include <iostream>

using namespace std;

/*
Se citeste un numar natural n. Sa se afiseze numarul de cifre pare pe care le are
acesta. Nume proiect C++ “nr_cifre_pare”.

*/

int main() {
    int n, u, nr_cifre_pare;
    cin >> n;
    nr_cifre_pare = 0;
    if (n == 0) {
        nr_cifre_pare = 1;
    }
    while (n != 0) {
        u = n % 10;
        if (u % 2 == 0) {
            nr_cifre_pare = nr_cifre_pare + 1;
        }
        n = n / 10;
    }
    cout << nr_cifre_pare;
    return 0;
}


