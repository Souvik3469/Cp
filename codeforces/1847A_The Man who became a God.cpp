#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[105], s[105];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            s[i - 1] = abs(a[i - 1] - a[i]);
        }
        sort(s + 1, s + n);
        int ans = 0;
        for (int i = 1; i <= n - k; i++)
        {
            ans += s[i];
        }
        cout << ans << '\n';
    }
}