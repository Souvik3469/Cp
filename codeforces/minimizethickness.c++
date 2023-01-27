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
    fastread();
    ll t;
    ll l, r;
    cin >> t;
    while (t--)
    {
        int n, x;
        // int a, b, c;
        string s;
        cin >> n;
        // cin >> s;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];
        int pre[n];
        pre[0] = a[0];

        for (int i = 1; i < n; i++)
            pre[i] = pre[i - 1] + a[i];

        int ans = n;

        for (int i = 0; i < n; i++)
        {
            int sum = pre[i];
            sum += sum;

            int curr = (i + 1), last = i;
            int idx;

            while (binary_search(pre, pre + n, sum))
            {
                idx = lower_bound(pre, pre + n, sum) - pre;
                sum += pre[i];
                curr = max(curr, idx - last);
                last = idx;
            }

            if (last == (n - 1))
                ans = min(ans, curr);
        }
        cout << ans << endl;
    }
    return 0;
}