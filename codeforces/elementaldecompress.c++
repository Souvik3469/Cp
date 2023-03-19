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

bool cp(vector<int> arr, int n)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            return false;
        }
    }
    return true;
}
const int N = 200005;
int a[N], b[N], c[N], ra[N], rb[N];
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
        // ll a, b, c;
        string s;
        cin >> n;
        // cin >> s;
        // vector<int> ar(n)
        //     ll sum;

        // map<int, int> mp;
        // for (int i = 0; i < n; i++)
        //     cin >> ar[i];
        // for (int i = 0; i < n; i++)
        //     mp[ar[i]]++;
        // vector<int> p(n);
        // vector<int> q(n);
        // // for (int i = 0; i < n; i++)
        // // {

        // //     a1[i + 1] = -1;
        // //     a2[i + 1] = -1;
        // //     p[i] = 0;
        // //     q[i] = 0;
        // // }
        // set<int> st;
        // for (auto &y : ar)
        //     st.insert(y);
        // for (auto &y : ar)
        //     v.pb(y);
        // sort(v.begin(), v.end());
        // int maxi = v[n - 1];
        // for (int i = 0; i < n; i++)
        // {
        //     if (mp[ar[i]] < 2)
        //         p.pb(ar[i]);
        // }

        // // int sum=0;
        // //  for(int i=0;i<n;i++)
        // //  sum+=ar[i];

        // for (int i = 0; i < n; i++)
        // {
        //     cout << p[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << q[i] << " ";
        // }
        // cout << endl;

        vector<pair<int, int>> V;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            a[i] = b[i] = 0;
            ra[i + 1] = rb[i + 1] = 1;
            V.push_back(make_pair(c[i], i));
        }
        sort(V.rbegin(), V.rend());

        for (int i = 0; i < n; i++)
        {
            int k = V[i].second;
            if (ra[c[k]] == 1)
                a[k] = c[k], ra[c[k]]--;
            else
                b[k] = c[k], rb[c[k]]--;
        }
        int f = 0;
        int r1 = n, r2 = n;
        for (int i = 0; i < n; i++)
        {
            int k = V[i].second;
            if (a[k] == 0)
            {
                while (ra[r1] == 0)
                    r1--;
                ra[r1]--;
                if (r1 > b[k])
                {
                    f = 1;
                }
                a[k] = r1--;
            }
            else
            {
                while (rb[r2] == 0)
                    r2--;
                rb[r2]--;
                if (r2 > a[k])
                {
                    f = 1;
                }
                b[k] = r2--;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (ra[i] != 0 || rb[i] != 0)
            {
                // cout << "NO" << '\n';
                f = 1;
            }
        }
        if (f == 1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << '\n';

            for (int i = 0; i < n; i++)
            {
                cout << a[i] << ' ';
            }
            cout << '\n';

            for (int i = 0; i < n; i++)
            {
                cout << b[i] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}