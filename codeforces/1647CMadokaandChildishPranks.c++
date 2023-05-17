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
    int n, m;
    cin >> n >> m;
    string a[n];
    in_range(i, 0, n - 1)
    {
        cin >> a[i];
    }

    bool f = false;

    vector<pair<pair<int, int>, pair<int, int>>> ans;

    in_range_back(i, 0, n - 1)
    {
        in_range_back(j, 0, m - 1)
        {
            if (a[i][j] == '1')
            {
                if (j - 1 > -1)
                {
                    ans.pb({{i + 1, j - 1 + 1}, {i + 1, j + 1}});
                }
                else if (i - 1 > -1)
                {
                    ans.pb({{i - 1 + 1, j + 1}, {i + 1, j + 1}});
                }
                else
                {
                    f = true;
                    break;
                }
            }
        }
        if (f)
        {
            break;
        }
    }

    if (f)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans.size() << endl;
        for (auto i : ans)
        {
            cout << i.first.first << " " << i.first.second << " " << i.second.first << " " << i.second.second << endl;
        }
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