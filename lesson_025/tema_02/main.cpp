#include <iostream>

using namespace std;

/*
2. Se citeste un vector cu n elemente intregi. Sa se afiseze cate elemente sunt numere perfecte (un numar
este perfect daca este egal cu suma divizorilor sai diferiti de el insusi, de exemplu 6 = 1+2+3).
Exemplu: n = 5
v = [12, 5, 6, 7, 16] se va afisa 1 (6 este numar perfect)
*/

#define MAX_VECTOR 100
int v[MAX_VECTOR];

bool nr_perfect(int n) {
    int suma = 1;
    //calculam divizorii si suma lor
    for (int div = 2; div <= n / 2; div++) {
        if (n % div == 0) {
            suma += div;
        }
    }
    return (n == suma);
}

int main() {
    int n, i, count_perfecte;
    cin >> n;
    count_perfecte = 0;
    for (i = 0; i < n; i++) {
        cin >> v[i];
        if (nr_perfect(v[i])) {
            count_perfecte++;
        }
    }
    cout << count_perfecte;
    return 0;
}
