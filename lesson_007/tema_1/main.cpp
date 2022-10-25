#include <iostream>

using namespace std;

////////////////////////////////////////////////////
// https://www.pbinfo.ro/probleme/176/picioare1   //
////////////////////////////////////////////////////

int main()
{
    int MAX_CAPETE = 1000000000;
    int MAX_PICIOARE = 1000000000;
    int c, p;

    cout << "Introduceti nr de capete: ";
    cin >> c;
    cout << "Introduceti nr de picioare: ";
    cin >> p;

    // validam datele de intrare
    if (c <= 0 || c >= MAX_CAPETE) {
        cout << "Nr de capete este invalid!! " << endl;
        return -1;
    }

    if (p <= 0 || p >= MAX_PICIOARE) {
        cout << "Nr de picioare este invalid!! " << endl;
        return -1;
    }
    if (p % 2 != 0) {
        cout << "Nr de picioare trebuie sa fie par!!" << endl;
        return -1;
    }

    if (p < 2*c || p > 4*c) {
        cout << "Date de intrare invalide!!" << endl;
        return -1;
    }

    // calcul
    int o = p/2 - c;
    int g = 2*c - p/2;

    cout << "Nr de gaini este egal cu: " << g << endl;
    cout << "Nr de oi este egal cu: " << o;
    return 0;
}
