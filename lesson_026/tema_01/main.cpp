#include <iostream>
#include <fstream>

using namespace std;

int vf[100];

int main() {
    ifstream fin("../culori.in");
    ofstream fout("../culori.out");
    int n, val;
    fin >> n;

    // initializam vectori de frecventa
    int lvf = 0;
    for (int i = 0; i < n; i++) {
        fin >> val;
        vf[val]++;
        if (val >= lvf) {
            lvf = val;
        }
    }

    for (int i = 0; i < lvf + 1; i++) {
        if (vf[i] > 0) {
            for (int c = 0; c < vf[i]; c++) {
                fout << i << " ";
            }
        }
    }
    return 0;
}
