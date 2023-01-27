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
        cin >> n;
        cin >> s;
        int ar[n];
        unordered_map<string, ll> mp;

        string ans = "NO";
        string s1;
        for (int i = 0; i < n - 1; i++)
        {
            s1 = s[i];
            s1 += s[i + 1];

            if (mp.find(s1) == mp.end())
            {
                mp[s1] = i;
            }
            else
            {
                if (mp[s1] != i - 1)
                {
                    ans = "YES";
                    break;
                }
            }
        }

        cout << ans << endl;
        // for(int i=0;i<n;i++)
        // cin>>ar[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];

        //  for(int i=0;i<n;i++){

        //}
    }
    return 0;
}