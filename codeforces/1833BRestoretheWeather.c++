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

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<pair<ll, ll>> mp;
    vector<ll> p(n);
    vector<ll> q(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp.pb(make_pair(a[i], i));
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        q[i] = b[i];
    }
    sort(mp.begin(), mp.end());
    sort(b.begin(), b.end());

    pair<int, int> pe;
    vector<ll> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[mp[i].ss] = b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    // for (int i = 0; i < n; i++)
    // {

    //     cout << mp[a[i]] << " ";
    // }
    // for (auto x : pe)
    // {
    //     cout << x.ff << " " << x.ss << " ";
    // }
    cout << endl;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input1.txt", "r", stdin);
    //     freopen("output1.txt", "w", stdout);
    // #endif
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