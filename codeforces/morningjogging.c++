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

const int N = 2e5 + 5;
const int mod = 1e9 + 7;

int a[1005];
int b[1005];

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int n, m, x;
    cin >> n >> m;
    vector<int> v[n + 4];
    vector<int> ans[n + 3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < n; i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    for (int i = 0; i < m; i++)
    {
        int mn = INT_MAX;
        int ind = -1;
        for (int j = 0; j < n; j++)
        {
            if (v[j][0] < mn)
            {
                mn = v[j][0];
                ind = j;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (j == ind)
            {
                ans[j].push_back(v[j][0]);
                v[j].erase(v[j].begin());
            }
            else
            {
                ans[j].push_back(v[j][v[j].size() - 1]);
                v[j].pop_back();
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
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
    // ll l, r;
    cin >> tt;
    while (tt--)
    {

        solve();
    }
    return 0;
}
