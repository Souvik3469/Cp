#include <bits/stdc++.h>
#define int long long
using namespace std;
int mod = 998244353;
int dp[101][101][101];
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];

    memset(dp, 0, sizeof(dp));
    // dp[0][0][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                dp[i][j][k] = (dp[i - 1][j][k] + dp[i][j - 1][k] + dp[i][j][k - 1] - dp[i - 1][j - 1][k] - dp[i - 1][j][k - 1] - dp[i][j - 1][k - 1] + dp[i - 1][j - 1][k - 1]) % mod;

                // dp[i][j][k] = ((((((dp[i][j][k - 1] + dp[i - 1][j][k]) % mod + dp[i][j - 1][k]) % mod - dp[i][j - 1][k - 1]) % mod - dp[i - 1][j][k - 1]) % mod - dp[i - 1][j - 1][k]) % mod + dp[i - 1][j - 1][k - 1]) % mod;
                if (a[i - 1] == b[j - 1] and b[j - 1] == c[k - 1])
                {
                    dp[i][j][k] += (1 + dp[i - 1][j - 1][k - 1]) % mod;
                }
                // else
                // {
                // }
            }
        }
    }

    cout << (dp[n][n][n] + mod) % mod << endl;
}