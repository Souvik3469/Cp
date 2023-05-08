#include <bits/stdc++.h>
#include <cmath>

#define ll long long
#define ull unsigned long long
#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

#define ff first
#define ss second

using namespace std;
bool isc(char c)
{
    if ((c >= 'a' && c <= 'z') || c == ' ')
        return true;
    else
        return false;
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
    ll n;
    cin >> n;
    ll arr[n];
    ll mn = LONG_LONG_MAX;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mn = min(mn, arr[i]);
        if (i != 0)
        {
            if (arr[i] != arr[i - 1])
                ok = false;
        }
    }
    if (ok)
        cout << "-1\n";
    else
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] - mn;
        }
        ll ans = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                continue;
            ans = __gcd(ans, arr[i]);
        }

        cout << ans << "\n";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    int tt;

    // // ll l, r;
    cin >> tt;

    while (tt--)
    {

        solve();
    }

    return 0;
}