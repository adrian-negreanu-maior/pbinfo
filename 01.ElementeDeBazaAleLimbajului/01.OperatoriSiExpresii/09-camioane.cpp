//ID: #2263
#include <iostream>

using namespace std;

int main()
{
    int t1, t2, n, m, z;
    cin >> t1 >> t2 >> n >> m >> z;

    int total = (n * t1 + m * t2) * z;
    cout << total;

    return 0;
}