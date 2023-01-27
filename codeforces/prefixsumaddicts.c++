#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define M 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    fastread();
    ll t, n, i, j, k, k1, f;
    cin >> t;
    while (t--)
    {
        // int n, x, k;
        // int a, b, c;
        // string s;
        cin >> n >> k;
        // cin >> s;
        int ar[k];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];
        /* vector<int> d(k);
         vector<int> v(k);
         int f = 0;
         if (k <= 3 && ((ar[1] - ar[0] == 1) || (ar[2] - ar[1] == 1)))
         {
             f = 1;
         }
         for (int i = 0; i < k - 1; i++)
         {
             d[i] = ar[i + 1] - ar[i];
         }
         d[k - 1] = ar[k - 1] - ar[k - 2];
         for (int i = 0; i < k; i++)
             v[i] = d[i];

         sort(d.begin(), d.end());

         // for (int i = 0; i < k; i++)
         //     cout << v[i];
         // cout << endl;
         // for (int i = 0; i < k; i++)
         //     cout << d[i];
         if (v == d && f == 0)
             cout << "YES" << endl;
         else if (f == 1)
             cout << "NO" << endl;*/

        k1 = n - k + 1;

        ll s[k], a[k];

        for (int i = 0; i < k; i++)
            cin >> s[i];

        if (s[0] <= 0)
        {
            a[0] = s[0] / k1;
        }
        else
        {
            a[0] = (s[0] / k1);
            if ((s[0] % k1) > 0)
            {
                a[0]++;
            }
        }

        for (i = 1; i < k; i++)
        {
            a[i] = s[i] - s[i - 1];
        }

        f = 0;

        for (i = 1; i < k; i++)
        {
            if (a[i] < a[i - 1])
            {
                f++;
                break;
            }
        }

        if (f == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}