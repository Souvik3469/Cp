
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

void solve()
{
    int n;
    cin >> n;
    int cnt[10] = {};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x % 10]++;
    }
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < min(cnt[i], 3); j++)
        {
            v.push_back(i);
        }
    }
    int m = v.size();
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j <= m; j++)
        {
            for (int k = j + 1; k < m; k++)
            {
                if ((v[i] + v[j] + v[k]) % 10 == 3)
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";
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
        // ll n, x;
        // ll a, b, c;
        // string s;
        // // cin >> n;
        // // cin >> s;
        // ll ar[n];
        // ll sum;
        // for(int i=0;i<n;i++)
        // cin>>ar[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];

        //  for(int i=0;i<n;i++){

        //}
        solve();
    }
    return 0;
}
