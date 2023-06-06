#include <iostream>

using namespace std;

/// aflam cate spatii sunt intre cuvinte sau numere

int main() {
    char c;
    int nrs;
    nrs = 0;
    cin.get(c);
    while (c != '\n') {
        if (c == ' ') {
            nrs++;
        }
        cin.get(c);
    }
    cout << nrs;
    return 0;
}
