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
    // ll l, r;
    cin >> t;
    while (t--)
    {
        int n, x;

        string s;
        cin >> n;
        // cin >> s;
        vector<int> ar(n);
        int psum = 0;
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        map<int, int> mp;
        for (auto &y : ar)
            mp[y]++;
        // int sum=0;
        int f = 0;
        // reverse(ar.begin(),ar.end());
        vector<int> ans;
        for (int i = 0; i < n / 2; i++)
        {
            ans.pb(ar[i]);
            ans.pb(ar[n - i - 1]);
        }

        if (n % 2 != 0)
            ans.pb(ar[n / 2]);

        for (int i = 0; i < n; i++)
        {

            if (ans[i] == psum)
            {
                // cout<<"NO"<<endl;
                f = 1;
            }
            psum += ans[i];
        }
        // if (mp.size() == 1)
        //     cout << "NO" << endl;
        // else
        // {

        //     sort(ar.begin(), ar.end());
        //     reverse(ar.begin(),ar.end());
        //     cout << "YES" << endl;
        //     // int i = 0;
        //     // int j = n - 1;
        //     // while (i <= j)
        //     // {
        //     //     // psum += ar[i];
        //     //     //  if (mp.find(psum) != mp.end())
        //     //     //  {
        //     //     //      f = 1;
        //     //     //      break;
        //     //     //  }
        //     //     //  if (psum == ar[i + 1])
        //     //     //  {
        //     //     //      f = 1;
        //     //     //      break;
        //     //     //  }
        //     //     // if (i % 2 == 0)

        //     //     cout << ar[i] << " " << ar[j] << " ";
        //     //     // else

        //     //     i++;
        //     //     j--;
        //     // }
        //     // cout << endl;

        //     if(ar[0]==ar[1])
        //     swap(ar[1],ar[n-1]);

        //     for(auto&y:ar)
        //     cout<<y<<" ";

        //     cout<<endl;

        //  for(int i=0;i<n;i++){

        //}
        //     if (f == 1)
        //         cout
        //      << "NO" << endl;
        // else cout << "YES" << endl;
        if (f == 1)
            cout << "NO";
        else
        {
            cout << "YES" << endl;
            for (auto &y : ans)
                cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}