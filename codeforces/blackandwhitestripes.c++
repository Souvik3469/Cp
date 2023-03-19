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
        int n, x, k;

        string str;
        cin >> n >> k;
        cin >> str;
        vector<int> ar(n);
        ll sum;
        // for(int i=0;i<n;i++)
        // cin>>ar[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];
        /* int mini=INT_MAX;
         int b=0;
         int w=0;
         int f=0;
         int maxi=INT_MIN;
         for(int i=0;i<n;i++){
             if(s[i]=='B')
             {
                 b++;
             }
             else {
             b=0;
             }
             maxi=max(maxi,b);
         }
         if(maxi==k)
         {
             f=1;
         }
         else{
             f=0;
         b=0;
      for(int i=0;i<n;i++){

         if(s[i]=='B')
         {
             b++;
         }
         else if(s[i]=='W'){
             w++;
         }
         // if(b==k){
         //     f=1;
         //     break;
         // }
         if(b+w==k){
            // f=0;
            int ans=w;
             mini=min(mini,ans);
             b=0;
             w=0;
         }
     }
         }
     if(f==1)
     cout<<0<<endl;
     else
     cout<<mini<<endl;*/

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            a[i] = a[i - 1];
            if (str[i - 1] == 'B')
                a[i]++;
        }
        int tmp = k;
        for (int i = k; i <= n; i++)
        {
            tmp = min(tmp, k - (a[i] - a[i - k]));
        }
        cout << tmp << endl;
    }
    return 0;
}