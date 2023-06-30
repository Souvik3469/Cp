#include <bits/stdc++.h>
#include <cmath>

#define ll long long
#define ull unsigned long long
#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define in_range(i, x, y) for (int i = x; i <= y; i++)
#define in_range_back(i, x, y) for (int i = y; i >= x; i--)

#define ff first
#define ss second

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    int n;
    cin >> n;
    int x = 1;
    int y = n * n + 1;
    int xx = n;

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= i; j++)
            cout << " ";

        for (j = i; j <= n; j++)
        {

            cout << x++ << "*";
        }
        // int z=m+m/2;

        for (j = i; j <= n; j++)
        {

            cout << y++;
            if (j < n)
                cout << "*";
        }
        y = y - (xx - 1) * 2 - 1;
        xx--;
        //  y=y-z-1;
        //  z=z-2;vgv

        cout << endl;
    }

    return 0;
}
