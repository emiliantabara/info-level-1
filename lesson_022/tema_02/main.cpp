#include <iostream>
#include <fstream>
using namespace std;

// Denumim subsecvenţă crescătoare o subsecvenţă de numere unul după altul care au proprietatea că fiecare număr este mai mare sau egal cu cel din-naintea lui.
// Dată o secvenţă de n numere să se calculeze şi afişeze lungimea celei mai lungi subsecvenţe crescătoare.
int main() {
    ifstream fin("../subcresc.in");
    ofstream fout("../subcresc.out");
    int n, i, val, start_secv, end_secv, next_val;
    fin >> n;
    fin >> val;
    start_secv = 0; // inceputul secventei crescatoare
    end_secv = 0; // sfarsitul secventei crescatoare
    int max_lungime = 0;
    for (i = 1; i < n; i++) {
        fin >> next_val;
        if (next_val >= val) {
            end_secv++;
        }
        else {
            // avem sfarsit de sir crescator, calculam lungimea maxima
            if (end_secv - start_secv + 1 >= max_lungime){
                max_lungime = end_secv - start_secv + 1;
            }
            end_secv = i;
            start_secv = i;
        }
        val = next_val;
    }

    // ultima pozitie din sir poate fi crescatoare
    if (end_secv - start_secv + 1 >= max_lungime){
        max_lungime = end_secv - start_secv + 1;
    }

    fout << max_lungime;
    return 0;
}
