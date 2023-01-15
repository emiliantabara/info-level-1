#include <iostream>
using namespace std;
int main() {
    int a,b,nr;
    cin >> a >> b;
    if (a >= 10 && b >= 10) {
        cout << "a si b trebuie sa fie cifre!!";
    }
    if (b > a) {
        nr = b*10+a;
    }
    else {
        nr = a*10+b;
    }
    cout << nr;
    return 0;
}
