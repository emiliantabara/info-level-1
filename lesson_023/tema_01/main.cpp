#include <iostream>
#include <fstream>
using namespace std;

/*
Un grup de copii joacă un joc în nisip pe plajă.
Fiecare are cîte un băţ de o anumită lungime. Ei aşează beţele aliniate, unul lîngă altul, în linie dreaptă şi aliniate la unul din capete (toate beţele încep din acelaşi punct).
Tu îţi alegi un alt băţ, pe care îl aşezi ca şi pe celelalte, aliniat la start. Apoi îl răsuceşti astfel încît capătul îndepărtat să rămînă pe loc, iar capătul de la start să se dea peste cap pînă ce va ajunge iar pe linie la lungime de două beţe de start.
Apoi reiei procedura.
Pentru a cîştiga jocul trebuie ca băţul tău să fie de o asemenea lungime încît capetele băţului să aterizeze pe toate capetele celorlalte beţe.
De asemenea trebuie să faci asta în număr minim de răsuciri.
*/

int euclid(int a, int b) {
    int copie_a;
    while (b != 0) {
        copie_a = a;
        a = b;
        b = copie_a % b;
    }
    return a;
}

int main() {
    ifstream fin("../plaja2.in");
    ofstream fout("../plaja2.out");
    int n, v, next_val, i, lungime_bat;
    fin >> n;
    fin >> v >> next_val;
    lungime_bat = euclid(v, next_val);
    for (i = 2; i < n; i++) {
        fin >> next_val;
        lungime_bat = euclid(lungime_bat, next_val);
    }
    fout << lungime_bat;
    return 0;
}