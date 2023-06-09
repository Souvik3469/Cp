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

bool iss(char ch)
{

    if (ch > 'a' && ch < 'z')
        return true;
    else
        return false;
}
bool isc(char ch)
{

    if (ch > 'A' && ch < 'Z')
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

    ll n, k, sum = 0, b;
    cin >> n >> k;
    vector<ll> v, pre(n + 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> b;
        v.push_back(b);
    }
    ll maxi = 0;
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++)
    {
        sum += v[i];
        pre[i + 1] = pre[i] + v[i];
    }
    for (ll i = 0; i <= k; i++)
    {
        maxi = max(maxi, pre[n - i] - pre[2 * (k - i)]);
    }
    cout << maxi << endl;

    // cout<<endl;
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