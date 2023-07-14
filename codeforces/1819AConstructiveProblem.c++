#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[202020], t;
bool sol()
{
    map<int, int> l, r;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (!r[a[i]])
            l[a[i]] = i;
        r[a[i]] = i;
    }
    int m = 0;
    while (l[m])
        ++m;
    if (!l[m + 1])
        return (m != n);
    for (int i = 0; i < m; ++i)
        if (l[m + 1] < l[i] && r[i] < r[m + 1])
            return 0;
    return 1;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin >> t;
    while (t--)
        cout << (sol() ? "Yes\n" : "No\n");
    return 0;
}