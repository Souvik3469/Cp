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

bool Possible(ll n, ll m, vector<ll> a, int k)
{
    int col = 0;
    for (int i = 0; i < k; i++)
    {
        if (i == 0 and m % 2 == 1)
        {
            if (a[i] / n < 3)
            {
                return false;
            }
            else
            {
                a[i] -= (3LL * n);
                col += 3;
            }
        }

        if (col >= m)
            return true;

        if (a[i] / n < 2)
            continue;

        col += (a[i] / n);
    }

    return (col >= m);
}

void solve()
{

    //     ll n; cin >> n;
    //     ll arr[n];
    //     for(int i = 0; i < n; i++) cin >> arr[i];
    //     sort(arr, arr+n);
    //     if(arr[n-1]==0) {
    //         cout << 0 << endl;
    //         return;
    //     }
    //     ll sum = 0;
    //     for(int i = 0; i < n-1; i++) {
    //         sum += arr[i];
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(k);
    for (ll i = 0; i < k; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<ll>());

    if (Possible(n, m, a, k) or Possible(m, n, a, k))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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

    // // ll l, r;
    cin >> tt;

    while (tt--)
    {

        solve();
    }

    return 0;
}