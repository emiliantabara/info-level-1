#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("../cezar.in");
ofstream fout("../cezar.out");
int main() {
    char c;
    fin.get (c);
    while (!fin.eof()) {
        if (c == 'z') {
            fout << 'a';
        }
        else {
            fout << (char) (c+1);
        }
        fin.get(c);
    }
    return 0;
}
