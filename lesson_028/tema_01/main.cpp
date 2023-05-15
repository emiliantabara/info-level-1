#include <iostream>
#include <fstream>
//#include <cstdlib>
using namespace std;

int vf[100];

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

    //generare(10000);

    ifstream fin("../pareimpare.in");
    int val;
    // cat timp nu este sfarsit de fisier = end of line
    while (!fin.eof()) {
        fin >> val;
        vf[val]++;
    }

    ofstream fout("../pareimpare.out");

    for (int i = 1; i < 100; i = i + 2) {
        if (vf[i] > 0) {
            fout << i << " ";
        }
    }
    fout << endl;
    for (int i = 98; i >= 0; i = i - 2) {
        if (vf[i] > 0) {
            fout << i << " ";
        }
    }
    return 0;
}
