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

    int n;
    cin >> n;

    int a[2][n + 1];
    int k = 2 * n;
    int idx = 0;
    a[0][1] = k;
    a[1][n] = k - 1;

    int x = 1;
    for (int i = 1; i <= n; i++)
    {

        a[i % 2][i] = x;
        x++;
    }
    x = k - 2;
    for (int i = 3; i <= n; i += 2)
    {

        a[0][i] = x;
        a[1][i - 1] = x - 1;
        x -= 2;
    }

    // cout<<endl;
    // for( int i=n/2+1;i<=n;i++){

    //     cout<<k<<" "<<i<<" ";
    //     k--;
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    // cout<<endl;
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