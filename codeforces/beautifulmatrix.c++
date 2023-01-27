#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t;
    ll l, r;
    int x = 0;

    string s;
    int n;
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
        // cin >> endl;
    }
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] != 0)
            {
                if (i == 2 && j == 2)
                    c = 0;
                else if (i != 2 && j == 2)
                    c = abs(i - 2);
                else if (j != 2 && i == 2)
                    c = abs(j - 2);
                else if (i != 2 && j != 2)
                    c = abs(i - 2) + abs(j - 2);
            }
        }
    }
    cout << c << endl;

    return 0;
}