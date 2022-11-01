#include <iostream>

using namespace std;

int main()
{

    int n,S,S1;

    cin >> n;
    S1 = n*(n+1)/2;
    S = (n-(n/2)) * (n-(n/2));

    cout << S;
    return 0;
}
