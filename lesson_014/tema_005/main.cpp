#include <iostream>
using namespace std;
/*
3. Lui Alex ii place cifra 7 si, desigur, toti multiplii lui 7. Pentru un n citit, el vrea
sa vada toti multiplii lui 7 mai mici sau egali cu n.
Exemplu:
30
se va afisa: 0 7 14 21 28
*/
int main() {
    int n,div;
    cin >> n;
    div = 0;
    while (n > div) {
        cout << div << " ";
        div = div+7;
    }
    return 0;
}
