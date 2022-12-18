#include <iostream>
using namespace std;

/*
1. Se citeste un numar natural n. Sa se afiseze n stelute pe ecran, cate una pe un rand.
Exemplu:
4
*
*
*
*
*/

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        return -1;
    }

    int nr_stelei = 1;
    while (nr_stelei <= n) {
        cout << "*" << endl;
        nr_stelei++;
    }

    return 0;
}
