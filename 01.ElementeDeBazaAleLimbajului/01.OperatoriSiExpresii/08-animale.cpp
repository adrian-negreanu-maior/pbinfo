//ID: #2240
#include <iostream>

using namespace std;

int main()
{
    int caini, pisici, gaini;

    cin >> caini;
    pisici = 2 * caini;
    gaini = 2 * pisici;

    int totalAnimale = caini + pisici + gaini;
    cout << totalAnimale << endl;

    return 0;
}

// analiza matematica a problemei ne conduce la formula
//     totalAnimale = 7 * caini
// formula cu care am obtine un cod mult mai compact
// dar nu la fel de usor de urmarit