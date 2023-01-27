
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, f, i, dec, inc;

    cin >> t;

    for (; t--;)
    {
        cin >> n;

        ll a[n];

        dec = 0;
        inc = 0;
        f = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                inc++;
            }
            else if (a[i] < a[i - 1])
            {
                dec++;
                if (inc > 0)
                {
                    f++;
                    break;
                }
            }
        }

        if (f == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}