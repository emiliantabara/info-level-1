#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // ifstream = input file stream
    // fin = file input
    ifstream fin("fisier.in");
    // ofstream = output file stream
    // fout = file output
    ofstream fout("fisier.out");
    int n;

    fin >> n;
    fout << 2 * n;
    return 0;
}