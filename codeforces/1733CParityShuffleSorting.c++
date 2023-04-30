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

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (is_sorted(a.begin(), a.end()))
    {
        cout << 0 << endl;
        return;
    }

    vector<pair<int, int>> ans;

    if (a[0] % 2 == 1)
    {
        int lastOdd;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] % 2 != 0)
            {
                lastOdd = i;
                break;
            }
        }
        if (lastOdd != 0)
        {
            a[0] = a[lastOdd];
            ans.push_back({0, lastOdd});
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                ans.push_back({0, i});
                a[i] = a[lastOdd];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[lastOdd])
            {
                ans.push_back({i, n - 1});
            }
        }
    }
    else
    {
        int lastEven;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] % 2 == 0)
            {
                lastEven = i;
                break;
            }
        }
        if (lastEven != 0)
        {
            a[0] = a[lastEven];
            ans.push_back({0, lastEven});
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                ans.push_back({0, i});
                a[i] = a[lastEven];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0 and a[i] != a[0])
            {
                ans.push_back({i, n - 1});
            }
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << (ans[i].first + 1) << " " << (ans[i].second + 1) << endl;
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