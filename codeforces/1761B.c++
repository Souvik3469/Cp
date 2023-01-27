
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, i, f;

    cin >> t;

    for (; t--;)
    {
        cin >> n;
        f = 0;

        ll a[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (i = 0; i < n; i++)
        {
            if (a[(i - 1 + n) % n] != a[(i + 1) % n])
            {
                f++;
                break;
            }
        }

        if (f == 0)
        {
            cout << n / 2 + 1 << "\n";
        }
        else
        {
            cout << n << "\n";
        }
    }
}
