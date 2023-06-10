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
    int a[n + 3], b[n + 3];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<int> mn, mx;
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        while (ind < n && a[i] > b[ind])
            ind++;
        mn.push_back(b[ind] - a[i]);
    }
    for (int i = 0; i < n; i++)
        cout << mn[i] << " ";
    cout << endl;

    ind = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        mx.push_back(b[ind] - a[i]);
        if (a[i] > b[i - 1])
            ind = i - 1;
    }
    reverse(mx.begin(), mx.end());
    for (int i = 0; i < n; i++)
        cout << mx[i] << " ";
    cout << endl;

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