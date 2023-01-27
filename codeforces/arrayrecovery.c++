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
    ll t;
    ll l, r;
    cin >> t;
    while (t--)
    {
        int n, x;
        int a, b, c;
        string s;
        cin >> n;
        // cin >> s;
        int d[n], ar[n];
        for (int i = 0; i < n; i++)
            cin >> d[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];

        int f = 0;
        ar[0] = d[0];
        for (int i = 1; i < n; i++)
        {
            if (d[i] == 0)
            {
                ar[i] = ar[i - 1];
            }
            else
            {
                if (ar[i - 1] - d[i] >= 0)
                {
                    f = 1;
                    break;
                }
                else
                    ar[i] = ar[i - 1] + d[i];
            }
        }
        if (f == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << ar[i] << " ";
            }
            cout << endl;
        }
        else if (f == 1)
            cout << -1 << endl;
    }
    return 0;
}