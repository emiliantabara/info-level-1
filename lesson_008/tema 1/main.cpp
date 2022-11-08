#include <iostream>

using namespace std;

// Să se scrie un program care citeşte de la tastatură un număr natural
// şi verifică dacă numărul este par sau impar.
int main()
{
    int n;
    cout << "Introduceti numarul n: ";
    cin >> n;

    if (n%2 == 0) {
        cout << "Numarul " << n << " este par";
    }
    else {
        cout << "Numarul " << n << " este impar";
    }
    return 0;
}
