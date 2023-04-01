#include <bits/stdc++.h>
#include <cmath>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define ull unsigned long long
#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define take_the_array_INT(x, o, n) \
    for (int i = o; i <= n; i++)    \
    {                               \
        scanf("%d", &x[i]);         \
    }
#define int_in2(x, y) scanf("%d %d", &x, &y)
#define int_out(x) printf("%d", x)
#define all(x) x.begin(), x.end()
#define in_range(i, x, y) for (int i = x; i <= y; i++)
#define in_range_back(i, x, y) for (int i = y; i >= x; i--)
#define nl printf("\n")
#define ff first
#define ss second

using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int len(int x)
{
    int res = 0;
    while (x != 0)
    {
        res++;
        x /= 10;
    }
    return res;
}

void solve()
{
    ll n;
    cin >> n;
    ll ar[n + 2];
    map<ll, ll> mp;
    ll sum = 0;
    vector<ll> v2;
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
        mp[ar[i]]++;
        v2.push_back(ar[i]);
    }
    // cout<<sum<<endl;
    vector<ll> v;
    priority_queue<ll> pq;
    pq.push(sum);
    for (ll i = 1; i < n; i++)
    {
        while (!pq.empty() && mp[pq.top()] != 0)
        {
            v.push_back(pq.top());
            mp[pq.top()]--;
            pq.pop();
        }
        if (!pq.empty())
        {
            ll x = pq.top();
            pq.pop();
            ll a, b;
            if (x % 2 == 0)
            {
                a = x / 2;
                b = x / 2;
            }
            else
            {
                a = x / 2;
                b = x / 2 + 1;
            }
            pq.push(a);
            pq.push(b);
        }
    }
    while (!pq.empty() && mp[pq.top()] != 0)
    {
        v.push_back(pq.top());
        mp[pq.top()]--;
        pq.pop();
    }
    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());
    if (v == v2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    int tt;
    // ll l, r;
    cin >> tt;
    while (tt--)
    {

        solve();
    }
    return 0;
}