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
        int n, x, m;
        // int a, b, c;
        string s;
        cin >> n >> m;
        // cin >> s;
        ll sum = 0;
        vector<vector<int>> a(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                a[i][j] = s[j] - '0';
                sum += a[i][j];
            }
        }

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];

        //  for(int i=0;i<n;i++){

        //}
        ll minn = 4;
        for (int i = 0; i < n - 1; i++)
        {

            for (int j = 0; j < m - 1; j++)
            {
                ll c = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
                minn = min(minn, c);
            }
        }
        if (sum == 0)
            cout << "0" << endl;
        else
        {
            if (minn < 3)
                cout << sum << endl;
            else
            {
                minn -= 2;
                cout << sum - minn << endl;
            }
        }
    }
    return 0;
}