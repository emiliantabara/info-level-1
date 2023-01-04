#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("../suma2.in");
    ofstream fout("../suma.out");
    int c, z;
    fin >> z;
    c = z * 5;
    fout << c;
}