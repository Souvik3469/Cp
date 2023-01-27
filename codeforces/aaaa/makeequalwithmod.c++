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
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];
        c = 0;
        bool f = false, hasone = false;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 1)
                hasone = true;
        }
        // if (c > 0 && c < n)
        //     cout << "NO" << endl;
        // else
        //     cout << "YES" << endl;

        if (!hasone)
            cout << "YES" << endl;
        else
        {
            sort(ar, ar + n);
            for (int i = 0; i < n - 1; i++)
            {
                if (ar[i + 1] - ar[i] == 1)
                {
                    f = true;
                    break;
                }
            }
            if (f == true)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}