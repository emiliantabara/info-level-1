#include <iostream>
using namespace std;

int f[12]; /// declararea inainte de main --> initializare cu 0

int main() {
    int n, vot, vmax;
    cin >> n; /// reprezinta nr de voturi
    for (int i = 0; i < n; i++) {
        cin >> vot; /// citesc votul curent
        f[vot]++; /// cresc nr de voturi pentru votul curent
    }
    for (int i = 0; i <= 11; i++) { /// parcurg jocurile posibile / elemente din vectorul de frecventa
        cout << i << " " << f[i] << endl;
    }
    vmax = 0;
    for (int i = 0; i <= 11; i++) {
        if (f[i] > vmax) {
            vmax = f[i];
        }
    }
    cout << vmax << endl;
    for (int i = 0; i <= 11; i++) {
        if (f[i] == vmax) {
            cout << i << " ";
        }
    }
    return 0;
}