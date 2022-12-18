#include <iostream>
using namespace std;

// 1. Bunicul are in gradina curcani, porci si gaste. Stiind cati curcani, cati porci si cate
// gaste are bunicul in curte, sa se spuna numarul de picioare din curtea sa.
// Exemplu:
// 3 2 5
// se va afisa: 24

int main() {
    int curcani,porci,gaste,nr_picioare;
    cin >> curcani >> porci >> gaste;
    nr_picioare = curcani * 2 + porci * 4 + gaste * 2;
    cout << nr_picioare;
    return 0;
}
