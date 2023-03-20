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
const int M = 998244353;
long long mod(long long x)
{
    return ((x % M + M) % M);
}
long long add(long long a, long long b)
{
    return mod(mod(a) + mod(b));
}
long long mul(long long a, long long b)
{
    return mod(mod(a) * mod(b));
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b;
    ll total = 0;
    int x = n;
    int cc = 0;
    while (1)
    {
        total += x;
        x--;
        cc++;
        if (cc >= k)
            break;
    }
    int other = n - k + 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= other)
            b.push_back(i);
    }
    sort(b.begin(), b.end());
    ll total_ways = 1;
    for (int i = 0; i < (int)b.size() - 1; i++)
    {
        total_ways = mul(total_ways, ((ll)b[i + 1] - b[i]));
    }
    cout << total << " " << total_ways;
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
    // cin >> tt;
    // while (tt--)
    //{

    solve();

    //}
    return 0;
}
