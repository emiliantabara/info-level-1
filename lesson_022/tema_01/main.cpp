#include <iostream>
#include <fstream>

const int CONSUM_URCARE = 3;
const int CONSUM_COBORARE = 1;

using namespace std;

int main() {
    ifstream fin("../cabina.in");
    ofstream fout("../cabina.out");

    int n; // nr de statii
    int calatori_in; // nr de persoane care urca la fiecare statie
    int total_calatori = 0;
    int total_combustibil = 0;
    fin >> n;
    int altitudine_curenta; // altitudinea statiei curente
    int distanta_statie; // altitudine_curenta dintre doua statii
    fin >> altitudine_curenta >> calatori_in;
    total_calatori = calatori_in;
    int altitudine_precedenta = altitudine_curenta; // altitudinea statiei precedente
    int distanta_precedenta = 0;
    int nr_statii_spec = 0;
    for (int statie = 1; statie < n; statie++) {
        fin >> altitudine_curenta >> calatori_in;
        total_calatori = total_calatori + calatori_in;

        distanta_statie = altitudine_curenta - altitudine_precedenta;
        altitudine_precedenta = altitudine_curenta;

        // determinam daca urca sau coboara
        if (distanta_statie <= 0) {
            // coboara
            total_combustibil = total_combustibil + CONSUM_COBORARE * abs(distanta_statie);
        }
        else {
            // urca
            total_combustibil = total_combustibil+ CONSUM_URCARE * abs(distanta_statie);
        }
        if (distanta_statie * distanta_precedenta < 0) {
            cout << statie << " ";
            nr_statii_spec++;
        }
        distanta_precedenta = distanta_statie;
    }
    fout << total_calatori<< endl << total_combustibil << endl << nr_statii_spec <<endl;
    return 0;
}