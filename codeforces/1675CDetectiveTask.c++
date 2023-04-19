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
#define take_the_array_INT(x, o, n)
for (int i = o; i <= n; i++)
{
    scanf("%d", &x[i]);
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

ll bs(ll l, ll h, ll a[], ll i)
{
    if (l <= h)
    {
        ll m = (l + h) / 2;

        if (a[m] >= (i - m + 1))
        {
            if (m == l)
            {
                return m;
            }
            else
            {
                if (a[m - 1] >= (i - (m - 1) + 1))
                {
                    return bs(l, m - 1, a, i);
                }
                else
                {
                    return m;
                }
            }
        }
        else
        {
            bs(m + 1, h, a, i);
        }
    }
    else
    {
        return -1;
    }
}

void solve()
{
    string s;
    cin >> s;
    int n;
    n = s.size();

    if (count(all(s), '?') == n)
    {
        cout << n << endl;
        return;
    }
    if (count(all(s), '1') == 0)
    {
        int ans = 0;
        in_range(i, 0, n - 1)
        {
            ans++;
            if (s[i] == '0')
                break;
        }
        cout << ans << endl;
        return;
    }
    int last_zero = -1;
    int ans;
    in_range_back(i, 0, n - 1)
    {
        if (s[i] == '0')
            last_zero = i;
        else
        {
            if (s[i] == '1')
            {
                if (last_zero == -1)
                {
                    ans = n - i;
                    break;
                }
                else
                {
                    ans = last_zero - i + 1;
                    break;
                }
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
    ll tt;

    // ll l, r;
    cin >> tt;

    while (tt--)
    {

        solve();
    }
    return 0;
}
