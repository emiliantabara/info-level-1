#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin ("../monotona.in");
    ofstream fout ("../monotona.out");
    int n, val, i, next_val;
    fin >> n;
    i = 1;
    int isAsc = 1;
    int isDesc = 1;
    fin >> val;
    while (i < n) {
        fin >> next_val;
        if (val < next_val) {
            isAsc =  0;
        }
        else {
            isDesc = 0;
        }
        i++;
    }
    /*
    if (isAsc == 1 || isDesc == 1) {
        fout << "da";
    }
    else {
        fout << "nu";
    }
    */
    string rez = (isAsc == 1 || isDesc == 1) ? "da" : "nu";
    fout << rez;
    return 0;
}
