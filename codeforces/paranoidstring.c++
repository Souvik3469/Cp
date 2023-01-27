
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
        ll n, x;
        int a, b, c;
        string s;
        cin >> n;
        cin >> s;
        int ar[n];
        // for (int i = 0; i < n; i++)
        //  cin >> ar[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];
        c = 0;
        // if(s.length()==1)
        // cout<<"1"<<endl;

        // for (int i = 0; i < n - 1; i++)
        // {
        //     // string s1 = s[i] + s[i + 1];
        //     for (int j = 0; j <= i; j++)
        //     {
        //         // s.length()==1&&(s[j]=='0'||s[j]=='1'))
        //         if ((s[i] == s[i + 1]) && (s[j] == '0' && s[j + 1] == '1') || (s[j] == '1' && s[j + 1] == '0'))
        //             c++;
        //         // if (s[j] == s[j + 1])
        //         //     c--;
        //     }
        // }
        // // cout << c << endl;
        // cout << c + n << endl;
        ll ans = (n * (n + 1)) / 2;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
                ans -= i;
        }
        cout << ans << endl;
    }
    return 0;
}