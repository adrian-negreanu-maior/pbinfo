//ID: #814
#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    // ca sa ajungem de la x la triplul lui y mai avem nevoie de 3x-y
    int toBeAdded = 3 * y - x;
    cout << toBeAdded;
    return 0;
}