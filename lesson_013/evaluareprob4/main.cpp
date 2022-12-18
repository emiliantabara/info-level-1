#include <iostream>
using namespace std;

// https://www.pbinfo.ro/probleme/4231/mingx

int main() {
    int n, x, minim;
    cin >> n >> x;
    if (x < 0 || x > 9){
        cout << "Nr x = " << x << " este invalid";
        return -1;
    }
    minim = x + 1;

    int cifra;
    while (n != 0) {
        cifra = n % 10;
        if (cifra > x) {
            if (cifra <= minim) {
                minim = cifra;
            }
        }
//        cout << cifra << " ";
        n = n / 10;
    }
    cout << minim;
    return 0;
}
