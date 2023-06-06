#include <iostream>
using namespace std;

int main() {
    unsigned long i = 4566663;
    string mystr = to_string(i);
    for (int j = mystr.length() - 1; j >= 0; j--) {
        cout << mystr[j] << ' ';
    }
    return 0;
}
