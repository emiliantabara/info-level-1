#include <iostream>

using namespace std;

int main()
{
    int n,z,u;
    cin >> n;
    z = n/10;
    u = n%10;
    if (n < 10 && u%2 == 1) {
        cout << "Da";
    }
    else {
        if (n >= 10 && u%2 == 1 && z%2 == 1) {
            cout << "Da";
        }
    else {
        cout << "Nu";
    }
    }



    return 0;
}
