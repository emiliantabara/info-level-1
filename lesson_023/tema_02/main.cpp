#include <iostream>
#include <fstream>
using namespace std;
/*
A fost odată ca niciodată, a fost un cangur care creştea ca Făt Frumos din poveste, într-un an precum alţii în zece.
Într-o zi a început să facă sărituri şi a sărit pentru început 7 metri.
A doua zi a sărit, în plus faţă de ziua precedentă, de zece ori mai mult.
În a treia zi a reuşit să sară, în plus faţă de prima zi, de zece ori mai mult decât în ziua a doua.
În a patra zi a sărit, în plus faţă de prima zi, de zece ori mai mult decât în ziua a treia.
Şi tot aşa mai departe.
*/
int main() {
    ifstream fin("../cangur.in");
    ofstream fout("../cangur.out");
    int n, i;
    long long s, total_s;
    fin >> n;
    s = 7;
    total_s = 7;
    for (i = 1; i < n; i++) {
        s = 7 + s * 10;
        total_s = total_s + s;
        cout << s << " ";
    }
    fout << total_s;
    return 0;
}
