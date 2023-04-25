#include <iostream>
using namespace std;

int f[12]; /// declararea inainte de main --> initializare cu 0

int main() {
    int n, vot;
    cin >> n; /// reprezinta nr de voturi
    for (int i = 0; i < n; i++) {
        cin >> vot; /// citesc votul curent
        f[vot]++; /// cresc nr de voturi pentru votul curent
    }
    for (int i = 0; i <= 11; i++) { /// parcurg jocurile posibile / elemente din vectorul de frecventa
        cout << i << " " << f[i] << endl;
    }
    return 0;
}