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
bool cons(vector<ll> arr)
{

    set<ll> st;
    for (auto &y : arr)
        st.insert(y);
    vector<ll> v;
    for (auto &y : st)
        v.pb(y);
    sort(v.begin(), v.end());
    int f = 0;
    int n = v.size();
    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i] + 1 != v[i + 1])
        {
            f = 1;
            break;
        }
    }
    return f == 0;
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
        vector<ll> ar(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        // vector<ll> v(n);
        // for (int i = n - 1; i >= 0; i--)
        // {
        //     v.pb(ar[i]);
        // }
        // if (is_sorted(ar.begin(), ar.end()))
        //     cout << 0 << endl;

        // else if (!cons(v) && is_sorted(v.begin(), v.end()))
        // {
        //     cout << v[n - 1] + 1 << endl;
        // }
        // else if (cons(ar) && !is_sorted(ar.begin(), ar.end()))
        //     cout << -1 << endl;
        // else
        // {
        //     ll mini = ar[0];
        //     ll maxi = ar[0];
        //     for (int i = 0; i < n; i++)
        //     {
        //         mini = min(maxi, ar[i]);
        //         maxi = max(maxi, ar[i]);
        //     }
        //     cout << (mini + maxi) / 2 << endl;
        // }

        int maxi = 0, mini = INT_MAX;
        for (int j = 0; j + 1 < n; j++)
        {
            int x = ar[j];
            int y = ar[j + 1];
            int midL = (x + y) / 2;
            int midR = (x + y + 1) / 2;
            if (x < y)
                mini = min(mini, midL);
            if (x > y)
                maxi = max(maxi, midR);
        }
        if (maxi <= mini)
            cout << maxi << endl;
        else
            cout << -1 << endl;

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];

        //  for(int i=0;i<n;i++){

        //}
    }
    return 0;
}