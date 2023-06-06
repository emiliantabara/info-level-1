#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numchar.in");
ofstream fout("numchar.out");

int main() {
    int n,i,s;
    char c;

    fin >> n;
    fin.get();
    s = 0;
    for (i = 0; i < n; i++) {
        fin.get(c);
        if (c >= '0' && c <= '9') {
            s = s + c - '0';
        }
    }
    fout << s;
    return 0;
}
