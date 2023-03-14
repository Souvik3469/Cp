#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
//#define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>

#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

  
const int N=2e5+5;
const int mod=1e9+7;
int a[N];

void solve() {
int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int cnt=1;
    int ans=0;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]<2LL*a[i])
            cnt++;
        else 
            cnt=1;
        if(cnt>k)
            ans++;
    }
 
    cout<<ans<<endl;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    ll tt;
    // ll l, r;
    cin >> tt;
    while (tt--)
    {
        
        solve();
	
    }
    return 0;
}
