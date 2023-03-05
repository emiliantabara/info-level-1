#include <iostream>
#include <fstream>

using namespace std;
/*
În fiecare zi lucrătoare din săptămână, Pinochio spune câte o minciună datorită căreia nasul acestuia creşte cu câte p centimetri pe zi.
Sâmbăta şi duminica, când vine bunicul Gepeto acasă, pentru a nu-l supăra prea tare, Pinochio reuşeşte să nu spună nici o minciună, ba
chiar uitându-se în oglindă observă că în fiecare din aceste zile lungimea nasului său scade cu câte 1 centimetru pe zi. Când începe o nouă săptămână,
rămânând singur acasă Pinochio continuă şirul minciunilor.
*/

#define SAMBATA 5
#define DUMINICA 6

int main() {
    ifstream fin("../pinochio.in");
    ofstream fout("../pinochio.out");
    int n, p, k;
    fin >> n >> p >> k;
    if (n >= 1000 || n < 1) {
        cout << "Puneti alta valuare!";
        return -1;
    }
    if (k >= 256 || k < 1) {
        cout << "Puneti alta valuare!";
        return -1;
    }
    if (p >= 100 || p < 1) {
        cout << "Puneti alta valuare!";
        return -1;
    }

    int i;
    int lungime_nas = n;
    for (i = 0; i < k; i++) {
        if (i == SAMBATA || i == DUMINICA) {
            lungime_nas--;
        } else {
            lungime_nas += p;
        }
    }
    fout << lungime_nas;
    return 0;
}