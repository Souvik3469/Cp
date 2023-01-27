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
        int n, x;
        int a, b, c;
        string s;
        // cin >> n;
        cin >> s;
        int ar[n];
        // for(int i=0;i<n;i++)
        // cin>>ar[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];

        //  for(int i=0;i<n;i++){

        //}
        int r = 0;
        int g = 0;
        // string s1;
        int f = 0;

        for (int i = 0; i < s.size(); i = i + 2)
        {
            // string s1 = s[i] + s[i + 1];
            // cout << s1 << " ";
            if ((s[i] == 'R' && s[i + 1] == 'R') || (s[i] == 'G' && s[i + 1] == 'G'))
            {
                f = 1;
            }
            else
            {
                f = 0;
                break;
            }
        }

        if (s.size() == 2 && (s == "RG" || s == "GR"))
            f = 1;
        if (s.size() % 2 != 0)
            f = 0;

        if (f == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}