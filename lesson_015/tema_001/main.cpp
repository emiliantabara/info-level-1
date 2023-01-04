#include <iostream>
#include <fstream>
using namespace std;

//Se dă un număr natural n. Calculați ultima cifră a lui 9 la puterea n.

int ultima_cifra(int x){
    int last_digit;
    if (x%2 == 0) {
        last_digit = 1;
    }
    else {
        last_digit = 9;
    }
    return last_digit;
}
int main() {
    ifstream fin("../9lan.in");
    ofstream fout("../9lan.out");
    int n, ultc;
    fin >> n;
    ultc = ultima_cifra(n);
    fout << ultc;
    return 0;
}
