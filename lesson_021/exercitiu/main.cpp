#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("../concurs.in");
    ofstream fout("../concurs.out");
    int H, n, c, i, gasit;
    fin >> H >> n;
    gasit = 0;
    for (i = 0; i < n; i++) {
        fin >> c;
        if (H == c) {
            gasit = 1;
        }
    }
    if (gasit == 1) {
        fout << "DA" << endl;
    } else {
        fout << "NU" << endl;
    }
    return 0;
}
