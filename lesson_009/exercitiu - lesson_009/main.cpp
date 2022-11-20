#include <iostream>

using namespace std;

int main()
{
    int n,suma;
    cin >> n;
    suma = 0;
    while (n > 0) {
        suma = suma+n;
        n = n-1;
    }
    cout << suma;
    return 0;
}
