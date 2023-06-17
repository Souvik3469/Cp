#include <bits/stdc++.h>
#include <cmath>

#define ll long long
#define ull unsigned long long
#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)


#define ff first
#define ss second

using namespace std;



bool iss(char ch){
    
    if(ch>'a'&&ch<'z')
    return true;
    else
    return false;
}
bool isc(char ch){
    
    if(ch>'A'&&ch<'Z')
    return true;
    else
    return false;
}
bool issorted( vector<int>&b,int n)
{
    for(int i=0;i<n-1;i++){
        if(b[i]>b[i+1])
        return false;
    }
    return true;
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

int n,m,d;      
cin>>n>>m>>d;
        vector<int> p(n+1);
        for(int i=1;i<=n;i++){
            cin>>p[i];
        }
        vector<int> a(m);
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
 
        vector<int> pos(n+1);
        for(int i=1;i<=n;i++){
            pos[p[i]]=i;
        }
 
        bool f=false;
        for(int i=0;i<m-1;i++){
            if(pos[a[i]]>pos[a[i+1]] or pos[a[i+1]]>pos[a[i]]+d){
                f=true;
                break;
            }
        }
        if(f){
            cout<<0<<endl;
            return;
        }
 
        int ans=INT_MAX;
        for(int i=0;i<m-1;i++){
            ans=min(ans,pos[a[i+1]]-pos[a[i]]);
        }
 
        if(d+1<n){
            for(int i=0;i<m-1;i++){
                ans=min(ans,d+1-(pos[a[i+1]]-pos[a[i]]));
            }
        }
 
 
        cout<<ans<<endl;

}


int main() {
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
