//ID: #554
#include <iostream>

using namespace std;

int main()
{
    int pretCutie, sumaTotala;
    cin >> pretCutie >> sumaTotala;

    // calculam pentru cate cutii ajunge suma totala
    int cutiiBomboane = sumaTotala / pretCutie;
    // si ce suma de bani ramane dupa cumpararea cutiilor
    int sumaRamasa = sumaTotala - pretCutie * cutiiBomboane;

    // apoi putem calcula suma extra necesara pentru a cumpara
    // inca o cutie
    int extraSuma = pretCutie - sumaRamasa;

    cout << cutiiBomboane << " " << extraSuma;


    return 0;
}