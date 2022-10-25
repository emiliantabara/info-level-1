#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Introduceti a,b: " <<endl;
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "Valorile nr s-au schimbat intre ele!" << " a = " << a << " b = " << b;
    return 0;
}
