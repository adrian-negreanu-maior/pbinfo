//ID: #3178
#include <iostream>

// evitam utilizarea unor numere magice in rezolvare
// definim denumiri simbolice pentru valori relevante
#define PPZ_FATA 3
#define PPZ_BAIAT 2

using namespace std;

int main()
{
    int fete, baieti, numarZile;
    cin >> fete >> baieti >> numarZile;

    // totalul este produsul dintre cate zile citeste grupul
    // si cate pagini pe zi se citesc (cate 3 fetele si cate 2 baietii)
    int totalPaginiCitite = numarZile * (fete * PPZ_FATA + baieti * PPZ_BAIAT);

    cout << totalPaginiCitite;
    return 0;
}