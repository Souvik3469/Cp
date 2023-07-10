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
    //

    ll n;
    cin >> n;
    vector<ll> a(n); // 1 0
    ll z, nz = 0;
    ll s = 0;
    ll x;
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
        x = (i * (i + 1)) / 2;
        if (s < x)
        {
            f = 1;
        }
    }
    if (f == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    /*
    if(n==2&&((a[0]==1&&a[1]==0)||(a[1]==1&&a[0]==0))){
    cout<<"YES"<<endl;
    return;
    }
    //ll x=(n*(n+1))/2;
    //cout<<x<<"*"<<s<<"&"<<endl;
    if(s<x-1){
    cout<<"NO"<<endl;
    return;
    }
    else
    {
        cout<<"YES"<<endl;
    }*/
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
