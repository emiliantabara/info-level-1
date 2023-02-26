#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("../suma_secs.in");
    ofstream fout("../suma_secs.out");
    int n, i, c;
    cin >> n;
    i = 0;
    int suma = 0;
    while (i < n) {
        fin >> c;
        suma = suma + c;
        i++;
    }
    fout << suma;
    return 0;
}
