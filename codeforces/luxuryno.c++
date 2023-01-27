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
bool isl(ll n)
{
    ll sq = sqrt(n);
    // ll sqq = floor(sq);
    if (n % sq == 0)
        return true;

    return false;
}

ll bs_sqrt(ll x)
{
    ll left = 0, right = 2000000123;
    while (right > left)
    {
        ll mid = (left + right) / 2;

        if (mid * mid > x)
            right = mid;
        else
            left = mid + 1;
    }
    return left - 1;
}

void solve()
{
    ll l;
    ll r;
    cin >> l >> r;
    ll sql = bs_sqrt(l), sqr = bs_sqrt(r);
    ll ans;
    if (sql == sqr)
    {
        ans = 0;
        for (int i = 0; i < 3; i++)
        {
            if (l <= sql * (sql + i) && sql * (sql + i) <= r)
                ans++;
        }
    }
    else
    {
        ans = (sqr - sql - 1) * 3;
        for (int i = 0; i < 3; i++)
        {
            if (l <= sql * (sql + i) && sql * (sql + i) <= r)
                ans++;
            if (l <= sqr * (sqr + i) && sqr * (sqr + i) <= r)
                ans++;
        }
    }
    cout << ans << "\n";
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    ll t;

    cin >> t;
    while (t--)
    {
        ll n, x;
        // ll a, b, c;
        string s;
        ll l, r;
        // cin >> l >> r;
        //  cin >> s;
        ll ar[n];
        ll sum;
        // for(int i=0;i<n;i++)
        // cin>>ar[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];
        // ll c = 0;
        // int f = 0;
        // if (l < 100000000 && r < 100000000)
        // {
        //     f = 1;
        //     for (ll i = l; i <= r; i++)
        //     {
        //         if (isl(i))
        //             c++;
        //     }
        // }
        // else
        // {
        //     f = 0;
        //     ll ls = sqrt(sqrt(l));

        //     ll rs = sqrt(sqrt(r));
        //     for (ll i = ls; i <= rs; i++)
        //     {
        //         if (isl(i))
        //             c++;
        //     }
        // }
        // if (f == 0)
        //     cout << c * c * c << endl;
        // else
        solve();
    }
    return 0;
}
