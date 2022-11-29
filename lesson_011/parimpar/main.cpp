#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n != 1) {
        if (n % 2 == 0)
            cout << "Par" << endl;
        else
            cout << "Impar" << endl;
        cin >> n;
    }
    return 0;
}
