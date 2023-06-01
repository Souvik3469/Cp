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

    int n, m;
    cin >> n >> m;

    vector<vector<int>> P(n, vector<int>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> P[i][j];
        }
    }

    long long ans = 0;
    for (int j = 0; j < m; ++j)
    {

        vector<long long> temp;
        for (int i = 0; i < n; ++i)
        {
            temp.push_back(P[i][j]);
        }
        sort(temp.begin(), temp.end());

        for (int i = 0; i < n; ++i)
        {
            // no of vaue greater than this
            long long rem = (n - (i + 1));
            rem *= temp[i];
            // no of value smaller than this
            long long add = i;
            add *= temp[i];

            ans += add;
            ans -= rem;
        }
        temp.clear();
    }

    cout << ans << "\n";
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