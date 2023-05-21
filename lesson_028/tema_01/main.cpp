#include <iostream>
#include <fstream>
//#include <cstdlib>
using namespace std;

int vf_pare[50];
int vf_impare[50];

//void generare(int n){
//    ofstream fout("../pareimpare.in");
//    int i = 0;
//    int valoare;
//    while (i < n){
//        valoare = rand() % 100; // range in 0: 99
//        fout << valoare << " ";
//        i++;
//    }
//}

int main() {

    //generare(10);

    ifstream fin("pareimpare.in");
    int val;
    // cat timp nu este sfarsit de fisier = end of file
    while (!fin.eof()) {
        fin >> val;
        if (val % 2 == 0) {
            vf_pare[val/2]++;
        }
        else {
            vf_impare[val/2]++;
        }
    }

    ofstream fout("pareimpare.out");

    for (int i = 0; i < 50; i = i+ 1) {
        if (vf_impare[i] > 0) {
            fout << (i * 2 + 1) << " ";
        }
    }
    fout << endl;
    for (int i = 49; i >= 0; i = i- 1) {
        if (vf_pare[i] > 0) {
            fout << (2 * i) << " ";
        }
    }
    return 0;
}
