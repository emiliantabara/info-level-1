#include <iostream>

using namespace std;

int aduna(int a, int b) {
    return a+b;
}

int inmultire(int a, int b) {
    return a*b;
}

 int impartire(int a, int b) {
    return a/b;
}

int main()
{
    string salut = "Salutare, lume!";

    cout << salut << endl;

    int x = 10, y = 82;

    cout << "Rezultatul adunarii lui ";
    cout << x ;
    cout << " si ";
    cout << y;
    cout << " este: ";
    cout << aduna(x,y);

    cout << endl;

    cout << "Rezultatul inmultirii lui " << x << " si " << y << " este: " << inmultire(x,y);

    cout << endl;

    cout << "Rezultatul impartirii lui " << y << " la " << x << " este: " << impartire(y,x);

    return 0;

}
