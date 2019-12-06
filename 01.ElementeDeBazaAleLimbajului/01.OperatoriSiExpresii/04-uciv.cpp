//ID: #1273
#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    // calculam ultima cifra a sumei celor doua numere 
    // cu ajutorul ultimelor cifre ale celor doua numere
    // in acest fel evitam o eventuala depasire daca numerele a si b
    // sunt ambele apropiate de valoare maxima reprezentabila
    // pentru tipul declarat al celor doua variabile ce memoreaza
    // datele de intrare
    int ultimaCifraASumei = (a % 10 + b % 10) % 10;

    cout << ultimaCifraASumei;

    return 0;
}
