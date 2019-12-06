//ID: #2263
#include <iostream>

using namespace std;

// introducem un nou concept, tipul inregistrare (struct)
// care ne permite sa organizam datele structurat
// un tip oarecare de camion este definit de capacitatea de transport
// numarul de camioane de acel tip aflate in flota firmei
// iar capacitatea totala  de transport cu acest tip de camion poate fi calculata
// pentru a nu repeta calculele la nevoie
struct TipCamion
{
    int capacitate;
    int numar;
    int capacitateTotala;
};

main()
{
    TipCamion c1, c2;
    int numarZileTransport;

    cin >> c1.capacitate >> c2.capacitate >> c1.numar >> c2.numar >> numarZileTransport;

    // nu ar trebui sa ne multumeasca repetarea prelucrarii pentru ambele tipuri de camioane
    // solutii si mai bune o sa avem atunci cand vom stii sa folosim functii
    // sau chiar programarea orientata-obiect
    c1.capacitateTotala = c1.capacitate * c1.numar;
    c2.capacitateTotala = c2.capacitate * c2.numar;

    // formula de calcul a cantitatii de marfa transportate cu doua tipuri diferite de camioane
    int total = (c1.capacitateTotala + c2.capacitateTotala) * numarZileTransport;
    cout << total << endl;

    return 0;
}