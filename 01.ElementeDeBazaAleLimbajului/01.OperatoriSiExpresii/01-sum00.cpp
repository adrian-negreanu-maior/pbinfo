//ID: #939
#include <iostream>

using namespace std;

int main()
{
    // declaram cele doua variabile pentru stocarea datelor de intrare
    int a, b;
    // apoi le initializam prin citire de la tastatura
    cin >> a >> b;

    // calculam intr-o a treia variabila suma ceruta
    // varabila este declarata si initializata intr-o singura instructiune
    int s = a + b;

    // apoi afisam rezultatul calculat
    cout << s;

    // absenta acestei instructiuni determina un mesaj de avertizare
    // pe unele compilatoare. O functie de tip int (cum este cazul functiei main)
    // trebuie sa returneze o valoare numar intreg. Prin conventie, 0 este interpretat
    // ca si codul de finalizare a executiei fara erori.
    return 0;
}
