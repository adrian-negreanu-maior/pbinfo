//ID: #1260
#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int suma = a + b;
    int diferenta = a - b;
    int produs = a * b;
    int cat = a / b;

    // afisam valorile stocate in mai multe variabile
    // in ordinea ceruta, separate prin spatiu
    cout << suma << " " << diferenta << " " << produs << " " << cat;

    return 0;
}
