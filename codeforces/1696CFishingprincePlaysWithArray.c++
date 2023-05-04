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

    ll n, m;
    cin >> n >> m;
    ll ar[n + 4];
    vector<pair<ll, ll>> v1, v2;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ll cnt = 0;
        while (x % m == 0)
        {
            cnt++;
            x /= m;
        }
        // cout<<x<<<" "<<cnt<<endl;
        ll ans = pow(m, cnt);
        if (v1.size() == 0)
        {
            v1.push_back({x, ans});
        }
        else
        {
            ll sz = v1.size() - 1;
            if (x == v1[sz].first)
                v1[sz].second += ans;
            else
                v1.push_back({x, ans});
        }
    }
    // for(ll i=0;i<v1.size();i++)cout<<v1[i].first<<" "<<v1[i].second<<endl;
    ll k;
    cin >> k;
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        ll cnt = 0;
        while (x % m == 0)
        {
            cnt++;
            x /= m;
        }
        ll ans = pow(m, cnt);
        if (v2.size() == 0)
        {
            v2.push_back({x, ans});
        }
        else
        {
            ll sz = v2.size() - 1;
            if (x == v2[sz].first)
                v2[sz].second += ans;
            else
                v2.push_back({x, ans});
        }
    }
    // for(ll i=0;i<v1.size();i++)cout<<v2[i].first<<" "<<v2[i].second<<endl;
    if (v1.size() != v2.size())
        cout << "No" << endl;
    else
    {
        ll ans = 0;
        for (ll i = 0; i < v1.size(); i++)
        {
            if (v1[i].first != v2[i].first || v1[i].second != v2[i].second)
            {
                ans = 1;
                break;
            }
        }
        if (ans == 0)
            cout << "Yes" << endl;
        else
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
    int tt;

    // // ll l, r;
    cin >> tt;

    while (tt--)
    {

        solve();
    }

    return 0;
}