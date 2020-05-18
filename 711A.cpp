// https://codeforces.com/problemset/problem/711/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char **m = new char *[n];
    for (int i = 0; i < n; i++)
    {
        m[i] = new char[5];
        for (int j = 0; j < 5; j++)
        {
            cin >> m[i][j];
        }
    }
    bool c = false;
    for (int i = 0; i < n && !c; i++)
    {
        for (int j = 0; j < 4 && !c; j++)
        {
            if (m[i][j] == 'O' && m[i][j + 1] == 'O')
            {
                m[i][j] = m[i][j + 1] = '+';
                c = true;
            }
        }
    }
    if (c)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
                cout << m[i][j];
            cout << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}