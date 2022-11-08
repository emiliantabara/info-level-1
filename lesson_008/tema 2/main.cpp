#include <iostream>

using namespace std;
// 2. Ionel doreste sa cumpere 2 produse de la supermarket, insa fiecare dintre cele doua produse
// sunt in doua variante de pret. Cunoscandu-se cele 2 preturi pentru fiecare produs, sa se
// afiseze cat ar economisi Ionel daca ar cumpara produsele cele mai ieftine.
// Exemplu:
// ● painea are cele doua preturi posibile 3 și 5
// ● iaurtul are cele doua preturi posibile 1 și 2
// Ionel va cumpara painea mai ieftina, adica pe cea de 3 lei si iaurtul cel mai ieftin, adica pe
// cel de 1 leu, deci va da pe cele doua produse 4 lei. Daca le-ar fi luat pe cele mai scumpe, el
// ar fi dat 5 lei pe paine si 2 lei pe iaurt, 7 lei in total → Ionel a economisit 3 lei.

int main()
{
    int pi1,pi2,pp1,pp2;

    cout << "Introduceti fiecare pret pentru cele doua produse: ";

    cin >> pp1 >> pp2 >> pi1 >> pi2;

    // Aflam economia la paine
    int ePaine = 0;

    if (pp1 < pp2) {
        ePaine = pp2 - pp1;
    }
    else {
        ePaine = pp1 - pp2;
    }

    int eIaurt = 0;
    if (pi1 < pi2) {
        eIaurt = pi2 - pi1;
    }
    else {
        eIaurt = pi1 - pi2;
    }
    int e = ePaine + eIaurt;

    cout << "A economisit: " << e;

    return 0;
}
