#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;

    int cifra;
    int aparitii_k = 0;
    int nr_cifre = 0;

    int nr_orfan = 0;
    int nr_cifre_nemutate = 0;

    while (n != 0) {
        cifra = n % 10;
        nr_cifre++;
        if (cifra == k) {
            aparitii_k++;
        }
        else {
            nr_cifre_nemutate++;
            nr_orfan = nr_orfan + (int) cifra * pow(10, nr_cifre_nemutate - 1);
        }

        //cout << cifra << " ";
        n = n/10;
    }
    cout << aparitii_k << endl;
    //cout << nr_orfan << endl;

    int x = 0;
    int n_modificat = 0;
    while (x < aparitii_k){
        n_modificat = n_modificat + (int)k* pow(10,nr_cifre-x-1);
        x++;
    }
    int n_final = n_modificat+nr_orfan;
    //cout << n_modificat << endl;
    cout << n_final;

    return 0;
}
