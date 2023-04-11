#include <bits/stdc++.h>
#include <cmath>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define ull unsigned long long
#define pb push_back
//#define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define     take_the_array_INT(x,o,n)       for(int i=o;i<=n;i++){scanf("%d",&x[i]);}
#define     int_in2(x,y)                    scanf("%d %d",&x,&y)
#define     int_out(x)                      printf("%d",x)
#define     all(x)                          x.begin(),x.end()
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
#define     nl                              printf("\n")
#define ff first
#define ss second

using namespace std;





ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

 


void  solve() {
    int n;
        cin>>n;
 
        pair<ll,ll> arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].ff;
            arr[i].ss=i;
        }
 
        sort(arr,arr+n);
 
        ll time=0;
        int ans[n];
        int idx=1;
        for(int i=n-1;i>=0;i-=2)
        {   
            ll temp = 2*idx;
            time= time + (arr[i].ff)*temp;
            ans[arr[i].ss]=idx;
 
            idx++;
        }
 
        idx=-1;
        for(int i=n-2;i>=0;i-=2)
        {
            int temp = 2*abs(idx);
            time = time  +  (arr[i].ff)*temp;
            ans[arr[i].ss]=idx;
 
            idx--;
        }
 
        cout<<time<<endl;
        cout<<0<<' ';
        for(int i=0;i<n;i++)
            cout<<ans[i]<<' ';
        cout<<endl;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    int tt;
    
    // ll l, r;
    cin >> tt;

  while (tt--)
    {
        
        solve();
	
    }
    return 0;
}
