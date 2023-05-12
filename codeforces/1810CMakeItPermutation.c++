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

    int n;
    long long c, d;
    cin >> n >> c >> d;
    vector<int> a(n);
    map<int, int> mp;

    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
        mp[a[j]]++;
    }
    long long ans = n * c + d;
    int cnt = 0;
    for (auto x : mp)
    {
        cnt++;
        ans = min(ans, (n - cnt) * c + (x.first - cnt) * d);
    }
    cout << ans << endl;
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