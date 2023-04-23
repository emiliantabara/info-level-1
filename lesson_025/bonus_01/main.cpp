#include <iostream>

using namespace std;

#define MAX_VECTOR 100
int a[MAX_VECTOR], b[MAX_VECTOR];
int n, m;

bool exista_in_vector(int x) {
    // cauta elementul x in vectorul b
    for (int i = 0; i < m; i++) {
        if (x == b[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    bool vida = true;
    for (int i = 0; i < n; i++) {
        if (exista_in_vector(a[i])) {
            cout << a[i] << " ";
            vida = false;
        }
    }
    if (vida) {
        cout << "Multimea vida";
    }
    return 0;
}
