// https://codeforces.com/problemset/problem/900/A
#include <bits/stdc++.h>

using namespace std;

struct point
{
    int x, y;
};

int main()
{
    int n;
    cin >> n;
    point v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].x >> v[i].y;
    }
    int m;
    for (int i = 0; i < n; i++)
    {
        m = 0;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                m += v[j].x >= 0 ? 1 : -1;
            }
        }
        if (abs(m) == (n - 1))
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}