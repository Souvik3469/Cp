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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> mon;
        vector<int> h(n);
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
            // sum+=h[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        for (int i = 0; i < n; i++)
        {
            mon.push_back({p[i], h[i]});
        }
        sort(mon.begin(), mon.end());
        ll i = 0;
        ll sum = k;
        ll z;
        while (k > 0 && i < n)
        {
            while ((mon[i].second - sum) > 0)
            {
                k = k - mon[i].first;
                if (k >= 0)
                    sum += k;
                else
                    break;
            }
            i++;
        }
        ll ctr = 0;
        for (auto i : mon)
        {
            if ((i.second - sum) <= 0)
            {
                ctr++;
            }
        }
        if (ctr == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}