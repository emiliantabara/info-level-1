#include <iostream>
using namespace std;

int v[100];

int main() {
    int n,i;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = 0; i < n; i++)
        cout << v[i] << endl;
    return 0;
}
