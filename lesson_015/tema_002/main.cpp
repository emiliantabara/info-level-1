#include <iostream>
#include <fstream>

using namespace std;

// Se da un număr n. Calculați ultima cifră a lui 2 la puterea n.



int main() {
    ifstream fin("../2lan.in");
    ofstream fout("../2lan.out");
    int puterea, ultima_cifra, rest;
    fin >> puterea;

    ultima_cifra = 1; // pentru puterea = 0
    rest = puterea % 4;
    if (puterea > 0) {
        switch (rest) {
            case 1:
                ultima_cifra = 2;
                break;
            case 0:
                ultima_cifra = 6;
                break;
            case 2:
                ultima_cifra = 4;
                break;
            case 3:
                ultima_cifra = 8;
                break;
        }
    }
//    if (puterea > 0) {
//        if (rest == 0) {
//            ultima_cifra = 6;
//        }
//        if (rest == 1) {
//            ultima_cifra = 2;
//        }
//        if (rest == 2) {
//            ultima_cifra = 4;
//        }
//        if (rest == 3) {
//            ultima_cifra = 8;
//        }
//    }
    fout << ultima_cifra;
    return 0;
}
