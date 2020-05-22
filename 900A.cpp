// https://codeforces.com/problemset/problem/900/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin >> c;
    int p, n, x, y;
    p = n = 0;
    for (int i = 0; i < c; i++)
    {
        cin >> x >> y;
        if (x >= 0)
            ++p;
        else
            ++n;
    }
    if ((p >= n && n <= 1) || (n >= p && p <= 1))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}