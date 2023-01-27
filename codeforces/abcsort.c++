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
        // int a, b, c;
        string s;
        cin >> n;
        // cin >> s;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];
        //     int mid, bs;
        //     bs = 0;
        //     // b[0]=a[n-1];
        //     // b[1]=a[n-2];
        //     int f = 0;
        //     if (n == 1)
        //         f = 1;

        //     // for (int i = 0; i < n; i++)
        //     // {

        //     //     mid = ceil((bs) / 2);

        //     //     b[mid] = a[n - i - 1];
        //     //     ++bs;
        //     //
        //     // }
        //     for (int i = 0; i < n; i++)
        //         cout << b[i] << " ";
        //     cout << endl;
        // int f = 0;
        // if (n == 1)
        //     f = 1;
        // for (int i = 0; i < n - 1; i++)
        //     if (a[i + 1] > a[i])
        //     {
        //         f = 1;
        //         break;
        //     }
        int f = 0;
        for (int i = n - 1; i > 0; i -= 2)
        {
            if (a[i] < a[i - 1])
                swap(a[i], a[i - 1]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}