#include <bits/stdc++.h>
#include <cmath>

#define ll long long
#define ull unsigned long long
#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define in_range(i, x, y) for (int i = x; i <= y; i++)
#define in_range_back(i, x, y) for (int i = y; i >= x; i--)

#define ff first
#define ss second

using namespace std;

bool iss(char ch)
{

    if (ch > 'a' && ch < 'z')
        return true;
    else
        return false;
}
bool isc(char ch)
{

    if (ch > 'A' && ch < 'Z')
        return true;
    else
        return false;
}
void solve()
{

    //     ll n; cin >> n;
    //     ll arr[n];
    //     for(int i = 0; i < n; i++) cin >> arr[i];
    //     sort(arr, arr+n);
    //     if(arr[n-1]==0) {
    //         cout << 0 << endl;
    //         return;
    //     }
    //     ll sum = 0;
    //     for(int i = 0; i < n-1; i++) {
    //         sum += arr[i];

    ll n, m;
    cin >> n >> m;
    vector<ll> a(n + 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end() - 1);
    // int c=0;
    // int mx=0;
    // if(n>m)
    // {
    //     cout<<"NO"<<endl;
    //     return;
    // }
    // int d=0;
    //  m=m-(2*a[0]+1);
    //  if(n==2)
    //  {
    //      if(a[1]>a[0])
    //      d=a[1]-a[0];
    //      else
    //      d=0;
    //     //  d=abs(a[1]-a[0]);
    //      m=m-(d+a[1]);
    //      if(m>=0){
    //      cout<<"YES"<<endl;
    //      return;
    //      }
    //      else
    //      {
    //          cout<<"NO"<<endl;
    //          return;
    //      }

    //  }
    // for(int i=1;i<n-1;i++){//2 5
    // //1 2
    // if(a[i+1]>a[i])
    //      d=a[i+1]-a[i];
    //      else
    //      d=0;

    //     m=m-(d+a[i]+1);
    //     if(m<0)
    //     {
    //         cout<<"NO"<<endl;//2 5
    //                           //2 1
    //         return;
    //     }

    // //   if(2*a[i]+1<=m)
    // //   m-=(2*a[i]+1);
    // }
    // // d=abs(a[n-1]-a[n-2]);
    // m=m-(d+a[n-1]+1);
    // if(m>=0)
    // cout<<"YES"<<endl;
    // else
    // cout<<"NO"<<endl;

    a[n] = a[0];
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        s += max(a[i], a[i + 1]);
    }

    s += n;
    if (s <= m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    ll tt;

    // // ll l, r;
    cin >> tt;

    while (tt--)
    {

        solve();
    }

    return 0;
}