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

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n, 0);

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] -= x;
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] += x;
    }

    sort(a.begin(), a.end(), greater<ll>());

    int ans = 0;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] > -1 and a[r] > -1)
        {
            ans++;
            l++, r--;
        }
        else if (a[l] < 0 and a[r] < 0)
        {
            break;
        }
        else if (a[l] > -1)
        {
            if (a[l] >= abs(a[r]))
            {
                ans++;
                l++;
                r--;
            }
            else
            {
                r--;
            }
        }
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

    // ll l, r;
    cin >> tt;

    while (tt--)
    {

        solve();
    }
    return 0;
}
