#include <iostream>

using namespace std;

int main() {
    int B, S, C, P;
    cin >> B >> S;
    if (S % B == 0) {
        C = S / B;
        P = 0;
    } else {
        C = S / B;
        P = B - (S % B);
    }
    cout << C << " " << P;
    return 0;
}
