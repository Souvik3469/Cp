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

    ll l;
    ll r;
    cin >> l >> r;
    ll mxn = -1;
    ll mx = -1;
    ll xx = 0;
    for (ll i = l; i <= r; i++)
    {
        ll maxi = -1;
        ll mini = 10;
        ll num = i;
        while (num > 0)
        {
            ll d = num % 10;
            if (d > maxi)
                maxi = d;
            if (d < mini)
                mini = d;

            xx = maxi - mini;
            num = num / 10;
        }
        if (xx > mx)
        {
            mx = xx;
            mxn = i;
        }
        if (xx == 9)
        {
            mxn = i;
            break;
        }
    }
    cout << mxn << endl;
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