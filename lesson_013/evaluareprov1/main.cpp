#include <iostream>
using namespace std;
// https://www.pbinfo.ro/probleme/3609/countmod10
int main() {
    int a,b;
    cin >> a >> b;
    if (a > b) {
        cout << "Valorile introduse nu sunt valide!!";
        return -1;
    }
    int nr_div = 0;

    int nr_curent = 10 * (a / 10 + 1);
    while (nr_curent <= b) {
        if (nr_curent % 10 == 0) {
            nr_div++;
        }
        nr_curent = nr_curent + 10;
        // cout << nr_curent << endl;
    }
    cout << nr_div;
    return 0;
}
