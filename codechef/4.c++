/*#include <bits/stdc++.h>

using namespace std;

bool ss(pair<int, int> &a, pair<int, int> &b)
{
    return (a.second < b.second);
}
int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> res;
        int a[1000000], b[1000000];
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            res.push_back(make_pair(a[i], b[i]));
        }

        sort(res.begin(), res.end(), ss);
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[res[i].first] <= 0)
            {
                s += res[i].second;
                mp[res[i].first]++;
                k--;
            }
            if (k == 0)
            {
                break;
            }
        }
        /* if(k>n)
         cout<<-1<<endl;*/
/*   if (k != 0)
       cout << -1 << endl;
   else
       cout << s << endl;
}

return 0;
}
*/
#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t;
    ll l, r;
    int x = 0;
    cin >> t;
    while (t--)
    {
        string s;
        // int n;
        //  cin >> s;
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[m];
        // ll mx = LONG_MIN;
        for (ll i = 0; i < m; i++)
        {
            cin >> a[i];
            // if (a[i] > mx)
            //  mx = a[i];
        }
        ll mx = *max_element(a, a + m);
        /*   int c=0;
           for (int i = 0; i < m; i++)
           {
               if(a[i]>a[n-i+k])
               c++;
           }*/
        // n+k-1/k
        int d;
        d = n + k - 1;
        // sort(v.begin(),v.end())
        // if(mx>v(n-k))
        if (mx > d / k)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}