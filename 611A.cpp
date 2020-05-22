// https://codeforces.com/problemset/problem/900/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    string o, m;
    cin >> n >> o >> m;
    if (m == "month")
    {
        x = (n <= 29 ? 12 : 11);
    }
    else
    {
        x = (n == 5 || n == 6) ? 53 : 52;
    }
    cout << x << endl;
    return 0;
}