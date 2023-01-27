#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // ll t, n, k, b, s, i, ans;
    int t;
    cin >> t;

    for (; t--;)
    {
        int n, m, x, y, d;
        cin >> n >> m >> x >> y >> d;
        int f = 0;

        if (x + d >= n && y + d >= m)
            f++;
        if (x - d <= 1 && y - d <= 1)
            f++;
        if (x + d >= n && x - d <= 1)
            f++;
        if (y + d >= m && y - d <= 1)
            f++;
        if (f != 0)
            cout << -1 << endl;
        else
            cout << n + m - 2 << endl;
    }
}