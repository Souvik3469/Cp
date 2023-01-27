#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define M 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    ll t;
    ll l, r;
    cin >> t;
    while (t--)
    {
        int n, x;
        int a, b, c;
        string s;
        cin >> n;
        // cin >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<pair<int, int>> res;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                res.push_back({v[i - 1] - v[i], i});
            }
        }

        vector<int> ans(n);
        sort(res.begin(), res.end());
        reverse(res.begin(), res.end());

        int cnt = n - 1;
        for (int i = 0; i < res.size(); i++)
        {
            ans[cnt] = res[i].second + 1;
            cnt--;
        }

        for (int i = 0; i < n; i++)
        {
            if (ans[i] == 0)
            {
                ans[i] = 1;
                cnt--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}