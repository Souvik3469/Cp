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
    ll t, n, c, q, i, j, k;
    string a, b;
    cin >> n >> c >> q;

    a = "1";
    cin >> b;

    a = a + b;

    ll l[c + 1], r[c + 1], len[c + 1];

    len[0] = n;

    for (i = 1; i <= c; i++)
    {
        cin >> l[i] >> r[i];
        len[i] = len[i - 1] + r[i] - l[i] + 1;
    }

    for (; q--;)
    {
        cin >> k;

        i = c;

        while (i != 0)
        {
            if (len[i - 1] >= k)
            {
                i--;
            }
            else
            {
                k = k - len[i - 1];
                k = l[i] + k - 1;
                i--;
            }
            // cout<<k<<" "<<len[i]<<"\n";
        }
        cout << a[k] << "\n";
    }
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