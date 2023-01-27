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

    ll n, a, b;

    string s;
    cin >> n >> a >> b;
    // cin >> s;
    vector<int> ar(n);
    ll sum;
    // for(int i=0;i<n;i++)
    // cin>>ar[i];
    ll w = -1, d = -1, l = -1;
    // int sum=0;
    //  for(int i=0;i<n;i++)
    //  sum+=ar[i];

    //  for(int i=0;i<n;i++){

    //}
    for (ll won = 0; won <= n; won++)
    {
        for (ll draw = 0; draw <= n - won; draw++)
        {
            ll lost = n - draw - won;
            if (lost <= b && won <= a)
            {
                ll a1 = a - won, b1 = b - lost;
                ll d1 = min(a1, b1);
                bool f = false;
                if (won == 0)
                {
                    if (lost == 0)
                    {
                        if (a1 == b1)
                            f = true;
                    }
                    else if (a1 <= b1)
                        f = true;
                }
                else if (draw == 0)
                {
                    if (lost == 0)
                    {
                        if (a1 >= b1)
                            f = true;
                    }
                    else
                        f = true;
                }
                else if (lost == 0)
                {
                    if (a1 >= b1)
                        f = true;
                }
                else
                    f = true;
                if (f && (w == -1 || draw < d))
                {
                    w = won;
                    d = draw;
                    l = lost;
                }
            }
        }
    }
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < d; i++)
        v.pb({0, 0});
    for (ll i = 0; i < w; i++)
        v.pb({1, 0});
    a -= w;
    for (ll i = 0; i < l; i++)
        v.pb({0, 1});
    b -= l;
    if (w == 0)
    {
        if (l == 0)
        {
            v[0].first += a;
            v[0].second += b;
        }
        else
        {
            v.back().second += b;
            v.back().first += a;
        }
    }
    else if (d == 0)
    {
        if (l == 0)
        {
            v[d].first += a;
            v[d].second += b;
        }
        else
        {
            v[d].first += a;
            v[w + d].second += b;
        }
    }
    else if (l == 0)
    {
        v[d].first += a;
        v[d].second += b;
    }
    else
    {
        v[0].first += a;
        v[0].second += b;
    }
    cout << d << endl;
    for (auto &y : v)
        cout << y.first << ":" << y.second << endl;

    return 0;
}

/*#include <bits/stdc++.h>
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
        cin >> n>>a>>b;
        // cin >> s;
        vector<int> ar(n);
        ll sum;*/
// for(int i=0;i<n;i++)
// cin>>ar[i];

// int sum=0;
//  for(int i=0;i<n;i++)
//  sum+=ar[i];

//  for(int i=0;i<n;i++){

//}
/* if(n==1){
     if(a==b)
     cout<<1<<endl;
     else if(a>b)
     {
         cout<<0<<endl;
         cout<<a<<":"<<b<<endl;
     }
     else{
         cout<<0<<endl;
         cout<<a<<":"<<b<<endl;
     }
 }
 else{

     if(a+b<n)
     {
     d=n-(a+b);
     cout<<d<<endl;
     for(int i=0;i<d;i++){
         cout<<0<<":"<<0<<endl;
     }
     for(int i=0;i<a;i++){
         cout<<"1:0"<<endl;
     }
     for(int i=0;i<b;i++){
         cout<<"0:1"<<endl;
     }

     }
     else if(a+b>=n&&(a==0||b==0)){
         int y=n-(a+b);
         if(a==0){
             cout<<0<<":"<<y<<endl;
              for(int i=0;i<n-1;i++){
             cout<<"0:1"<<endl;
         }
         else if(b==0){

             cout<<y<<":"<<0<<endl;
              for(int i=0;i<n-1;i++){
             cout<<"1:0"<<endl;

         }
         }

     }
 }
}
return 0;
}*/
