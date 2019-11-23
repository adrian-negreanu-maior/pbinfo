#include <iostream>

using namespace std;

// ifstream cin("chenar.in");
// ofstream cout("chenar.out");

int a[1010][1010];

int genmat(int n) {
    int i, j;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            a[i][j] = (i * j) % 10;
}

int afisare(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[110][110], n, i, j;
    cin >> n;

    cout << endl;
    genmat(n);
    afisare(n);

    // cin.close();
    // cout.close();
    return 0;
}