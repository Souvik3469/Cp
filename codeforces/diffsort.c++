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
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];

        //  for(int i=0;i<n;i++){

        //}
        if (ar[n - 2] > ar[n - 1])
            cout << -1 << endl;
        else
        {
            if (ar[n - 1] < 0)
            {
                if (is_sorted(ar.begin(), ar.end()))
                    cout << 0 << endl;
                else
                    cout << -1 << endl;
            }
            else
            {
                cout << n - 2 << endl;
                for (int i = 1; i <= n - 2; i++)
                {
                    cout << i << ' ' << n - 1 << ' ' << n << endl;
                }
            }
        }
    }
    return 0;
}