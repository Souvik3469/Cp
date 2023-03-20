#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>

#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int q;
    cin >> q;

    char mnS = 'a';
    char mxS = 'a';

    char mnT = 'a';
    char mxT = 'a';

    ll lenS = 1, lenT = 1;

    while (q--)
    {
        ll d, k;
        cin >> d >> k;
        string x;
        cin >> x;

        ll lenX = x.size();

        if (d == 1)
        {
            char mn = *min_element(x.begin(), x.end());
            char mx = *max_element(x.begin(), x.end());
            mnS = min(mnS, mn);
            mxS = max(mxS, mx);
            lenS += (lenX * k);
        }
        else if (d == 2)
        {
            char mn = *min_element(x.begin(), x.end());
            char mx = *max_element(x.begin(), x.end());
            mxT = max(mxT, mx);
            mnT = min(mnT, mn);
            lenT += (lenX * k);
        }

        if (mxT > 'a')
        {
            cout << "YES" << endl;
        }
        else
        {
            if (mxS > 'a')
            {
                cout << "NO" << endl;
            }
            else
            {
                if (lenS < lenT)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    ll tt;
    // ll l, r;
    cin >> tt;
    while (tt--)
    {

        solve();
    }
    return 0;
}
