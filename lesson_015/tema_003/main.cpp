#include <iostream>
#include <fstream>


using namespace std;

// Calculaţi numărul de divizori ai lui n

int main() {
    ifstream fin ("nrdiv.in");
    ofstream fout ("nrdiv.out");
    int n,rez,div;
    fin >> n;
    rez = 2;

    // sqrt(n)
    for (div = 2; div <= n/2; div++) {
        if (n % div == 0) {
            rez++;
        }
    }

    fout << rez;
    return 0;
}