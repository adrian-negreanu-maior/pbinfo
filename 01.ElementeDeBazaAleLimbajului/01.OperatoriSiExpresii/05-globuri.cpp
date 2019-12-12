//ID: #813
#include <iostream>

using namespace std;

int main()
{
    // utilizam denumiri sugestive pentru variabile
    int globuriAlbe, globuriRosii, globuriVerzi;
    // se da numarul de globuri albe
    cin >> globuriAlbe;
    // si regulile dupa care se calculeaza numarul de globuri rosii si verzi
    globuriRosii = 2 * globuriAlbe;
    globuriVerzi = globuriRosii - 3;

    // calculam totalul
    int totalGloburi = globuriAlbe + globuriRosii + globuriVerzi;

    // si apoi afisam raspunsul
    cout << totalGloburi << endl;

    return 0;
}

    // prin analiza matematica a enuntului, puteam folosi si o formula
    int totalGloburi = 5 * globuriAlbe - 3;