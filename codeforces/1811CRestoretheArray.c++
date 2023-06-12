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
bool issorted(vector<int> &b, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] > b[i + 1])
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

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n - 1);
    //  int a[n];
    //  int b[n-1];

    for (int i = 0; i < n - 1; i++)
        cin >> b[i];
    int f = 0;
    cout << b[0] << " ";
    for (int i = 0; i < n - 2; i++)
    {
        cout << min(b[i], b[i + 1]) << " ";
    }
    cout << b[n - 2] << endl;
    /*
     if(issorted(b,n-1)){
         f=1;
          a[0]=0;
         for(int i=1;i<n;i++){
         a[i]=b[i-1];
         }
     }
     else{

     for(int i=0;i<n;i++){

         if(b[i]<b[i-1])
         {
             a[i]=0;
             continue;
         }



         else{
           a[i]=b[i];
         }

     }
     }
    //   for(int i=0;i<n-1;i++)
    //  cout<<b[i]<<" ";
     for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
    //cout<<f<<" *"<<endl;
     cout<<endl;
     */
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