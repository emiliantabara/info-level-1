#include <iostream>
using namespace std;

/*
2. Se da un vector cu n elemente numere naturale. Sa se afiseze pe primul rand numerele pare din vector si,
pe al doilea rand, numerele impare din vector (daca nu exista numere pare sau impare, atunci randul
corespunzator va fi un rand liber). Stim ca 1 <= n <= 500.
*/

#define MAX_ARRAY 500

void list_vector(int m[MAX_ARRAY], int n, bool even) {
    for (int i = 0; i < n; i++) {
        if (m[i] % 2 == (int)even)
            cout << m[i] << " ";
    }
    cout << endl;
}

int main() {
    int v[MAX_ARRAY];
    int n,i;
    cin >> n;
    if (n > MAX_ARRAY) {
        cout << "Invalid array size: "<< n;
        return -1;
    }
    // read the array
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }
    list_vector(v, n, false);
    list_vector(v, n, true);
    return 0;
}
