#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;

    if (a >= 0 && a <= 9) {
        cout << "A scris o cifra!!!" << endl;
    }
    else {
        cout << "Nu ai scris o cifra!!!" << endl;
    }

    return 0;
}
