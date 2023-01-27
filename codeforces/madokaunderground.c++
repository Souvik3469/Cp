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
        ll n, x, k, r, c;
        // ll a, b, c;
        string s;
        cin >> n >> k >> r >> c;
        // cin >> s;
        ll ar[n];
        ll sum;
        // for(int i=0;i<n;i++)
        // cin>>ar[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                if (i == r && j == c)
                    cout << "X";
                else if ((i + j) % k == (r + c) % k)
                    cout << "X";
                else
                    cout << ".";
                // k--;
            }
            cout << endl;
        }
    }
    return 0;
}