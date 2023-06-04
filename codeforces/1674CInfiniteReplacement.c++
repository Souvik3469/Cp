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

    /*int A,B,n;
    cin>>A>>B>>n;

    vector<int>a(n);
    vector<int>b(n);

    for(int i=0;i<n;i++)
    cin>>a[i];
    int s=0;
    int f1=0;
    int f2=0;
     for(int i=0;i<n;i++){
         cin>>b[i];
         s+=b[i];
     }
     int i=0;
     while(i<n){
    while(B>0||s>0){



         B=B-a[i];//15
         s=b[i]-A;//13


         if(B<=0)
         {
             f2=1;
             break;
         }
         if(s<=0)
         {
             f1=1;
             break;
         }
     }
     i++;
    //  if(f1==1||f2==1)
    //  break;
    //  if(s<=0){
    //       f1=1;
    //          break;
    //  }
    }
    if(f1==1)
    cout<<"YES"<<endl;
    else if(f2==1)
    cout<<"NO"<<endl;*/
    string s, t;
    cin >> s >> t;
    int ans;
    if (t.size() == 1 && t[0] == 'a')
        cout << 1 << endl;
    else if (t.find('a') != -1)
        cout << -1 << endl;
    else
        cout << (1LL << s.size()) << endl;
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