#include <bits/stdc++.h>
#include <cmath>

#define ll long long
#define ull unsigned long long
#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

#define ff first
#define ss second

using namespace std;
bool isc(char c)
{
    if ((c >= 'a' && c <= 'z') || c == ' ')
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

    ll a[10][10];
    ll b[10][10];

    for (ll i = 1; i <= 9; i++)
    {
        string s;
        cin >> s;
        for (ll j = 1; j <= 9; j++)
        {
            a[i][j] = s[j - 1] - '0';
            b[i][j] = a[i][j];
        }
    }

    // cout<<"\n";
    // for(ll i=1;i<=9;i++){
    //     for(ll j=1;j<=9;j++){
    //         cout<<a[i][j];
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";

    ll val = a[1][1];
    ll req_val;
    for (ll i = 1; i <= 9; i++)
    {
        if (i != val)
        {
            req_val = i;
        }
    }
    b[1][1] = req_val;

    val = a[2][4];
    req_val;
    for (ll i = 1; i <= 9; i++)
    {
        if (i != val)
        {
            req_val = i;
        }
    }
    b[2][4] = req_val;

    val = a[3][7];
    req_val;
    for (ll i = 1; i <= 9; i++)
    {
        if (i != val)
        {
            req_val = i;
        }
    }
    b[3][7] = req_val;

    val = a[4][2];
    req_val;
    for (ll i = 1; i <= 9; i++)
    {
        if (i != val)
        {
            req_val = i;
        }
    }
    b[4][2] = req_val;

    val = a[5][5];
    req_val;
    for (ll i = 1; i <= 9; i++)
    {
        if (i != val)
        {
            req_val = i;
        }
    }
    b[5][5] = req_val;

    val = a[6][8];
    req_val;
    for (ll i = 1; i <= 9; i++)
    {
        if (i != val)
        {
            req_val = i;
        }
    }
    b[6][8] = req_val;

    val = a[7][3];
    req_val;
    for (ll i = 1; i <= 9; i++)
    {
        if (i != val)
        {
            req_val = i;
        }
    }
    b[7][3] = req_val;

    val = a[8][6];
    req_val;
    for (ll i = 1; i <= 9; i++)
    {
        if (i != val)
        {
            req_val = i;
        }
    }
    b[8][6] = req_val;

    val = a[9][9];
    req_val;
    for (ll i = 1; i <= 9; i++)
    {
        if (i != val)
        {
            req_val = i;
        }
    }
    b[9][9] = req_val;

    for (ll i = 1; i <= 9; i++)
    {
        for (ll j = 1; j <= 9; j++)
        {
            cout << b[i][j];
        }
        cout << "\n";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    int tt;

    // // ll l, r;
    cin >> tt;

    while (tt--)
    {

        solve();
    }

    return 0;
}