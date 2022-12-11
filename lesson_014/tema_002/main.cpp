#include <iostream>

using namespace std;

// Se citește un număr natural n. Să se determine numărul de divizori ai oglinditului lui n.
// Oglinditul lui 63 este 36, care are 9 divizori.

// functia va numara divizorii nr oglindit folosind while
int count_divs_while(int ogli) {
    int div = 1;
    int nrd = 0;
    while (div <= ogli) {
        if (ogli % div == 0) {
            nrd++;
            cout << div << " ";
        }
        div++;
    }
    return nrd;
}

// functia va numara divizorii nr oglindit folosind for loop
int count_divs_for(int ogli) {
    int nrd = 0;
    for (int div = 1; div <= ogli; div++) {
        if (ogli % div == 0) {
            nrd++;
            cout << div << " ";
        }
    }
    return nrd;
}

int main() {
    int n, ogli, u, nrd;
    cin >> n;
    ogli = 0;
    cout << "Nr introdus este: " << n << endl;

    while (n != 0) {
        u = n % 10;
        ogli = ogli * 10 + u;
        n = n / 10;
    }

    cout << "Nr oglindit este: " << ogli << endl;

    nrd = count_divs_while(ogli);
    cout << endl << "Nr divizorilor lui " << ogli << ": " << nrd;

//    cout << endl;
//    nrd = count_divs_for(ogli);
//    cout << endl << "Nr divizorilor lui " << ogli << ": " << nrd;

    return 0;
}