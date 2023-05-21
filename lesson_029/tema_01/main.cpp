#include <iostream>
#include <fstream>
using namespace std;

int vf[1000];

int main() {
    ifstream fin("castel.in");
    ofstream fout("castel.out");
    int val,n,i,k,key,max,cifra,nr_camera;
    fin >> n;
    max = 0;
    nr_camera = 0;
    for (i = 0; i < n; i++) {
        fin >> val;
        while (val != 0) {
            cifra = val%10;
            vf[cifra]++;
            val = val/10;
        }
    }
    fin >> k;
    for (i = 0; i < k; i++) {
        fin >> key;
        if (vf[key] > max) {
            max = vf[key];
            nr_camera = key;
        }
    }
    fout << nr_camera << " " << max;
    return 0;
}
