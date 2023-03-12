#include <iostream>
#include <fstream>
using namespace std;

/*
Numim o secvenţă monotonă dacă ea este fie crescătoare fie descrescătoare.
O secvenţă este crescătoare dacă fiecare element este mai mare sau egal cu cel din-naintea lui.
O secvenţă este descrescătoare dacă fiecare element este mai mic sau egal cu cel din-naintea lui.
Dată o secvenţă de n numere să se spună dacă este monotonă.
 */

int main() {
    ifstream fin("../monotona.in");
    ofstream fout("../monotona.out");
    int n, val, i, next_val;
    fin >> n;
    if (n < 0 || n > 100000) {
        return -1;
    }
    int isAsc = 1;
    int isDesc = 1;

    i = 1;
    fin >> val;

    while (i < n) {
        fin >> next_val;
        if (next_val < 0 || next_val > 2000000000) {
            return -1;
        }

        // desc
        if (val < next_val) {
            isDesc = 0;
        }
        // asc
        if (val > next_val)
        {
            isAsc = 0;
        }
        val = next_val;
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