#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef long long ll;
#define pb push_back
#define ff first
#define ss second
const int N = 2e3 + 7;
const int mod = 998244353;
const double eps = 1e-9;
const double pi = 3.14159265358979323846;
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    op_set;

ll binpow(ll base, ll ex)
{
    ll ans = 1ll;
    while (ex > 0)
    {
        if (ex % 2 == 1)
            ans = (ans * base) % mod;
        ex = ex / 2;
        base = (base * base) % mod;
    }
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;
    ll ans = 0ll;
    for (int i = 1ll; i <= m; i++)
    {
        int setbits = __builtin_popcount(i);
        ll poss = (1 << setbits) - 1;
        ans = (ans + binpow(poss, n - 1)) % mod;
    }

    cout << ans << "\n";
}