//ID: #3179
#include <iostream>

using namespace std;

// daca un arbore are n crengi si avem in total n arbori avem n*n crengi
// enuntul cere sa calculam si sa afisam n la puterea a 5-a
int main()
{
    int n;
    cin >> n;

    int response = n * n * n * n * n;

    cout << response << endl;
    return 0;
}