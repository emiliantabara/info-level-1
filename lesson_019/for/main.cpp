#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin >> n;
    for (i = 0; n >= i; i + 2) {
        cout << i << " ";
    }
    return 0;
}
