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

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<char, int> mp;

    for (auto x : s)
        mp[x]++;

    int c = 0;
    for (auto y : mp)
    {

        char ch = y.first;
        int f = y.second;

        // cout<<ch<<" "<<f<<" ";

        if (iss(ch) && mp[ch] > 0 && mp[ch - 'a' + 'A'] > 0)
        {
            c += min(mp[ch], mp[ch - 'a' + 'A']);
            mp[ch] = mp[ch] - min(mp[ch], mp[ch - 'a' + 'A']);
            mp[ch - 'a' + 'A'] = mp[ch - 'a' + 'A'] - min(mp[ch], mp[ch - 'a' + 'A']);
        }
        if (isc(ch) && mp[ch] > 0 && mp[ch - 'A' + 'a'] > 0)
        {
            c += min(mp[ch], mp[ch - 'A' + 'a']);
            mp[ch] = mp[ch] - min(mp[ch], mp[ch - 'A' + 'a']);
            mp[ch - 'A' + 'a'] = mp[ch - 'A' + 'a'] - min(mp[ch], mp[ch - 'A' + 'a']);
        }
        //    cout<<c<<"+";
        if (mp[ch] > 0)
        {
            c += min(mp[ch] / 2, k);
            mp[ch] = mp[ch] - 2;
            // k--;
        }

        //   if(mp[ch-'a'+'A']>0)
        // c+=min(mp[ch-'a'+'A']/2,k);
    }
    // cout<<c<<endl;

    vector<vector<int>> count(26, vector<int>(2, 0));
    int ans = 0;

    for (auto x : s)
    {
        if (x >= 'a' && x <= 'z')
        {
            count[x - 'a'][0]++;
        }
        else
        {
            count[x - 'A'][1]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        ans += min({count[i][0], count[i][1]});
        int temp = min({k, abs(count[i][0] - count[i][1]) / 2});
        ans += temp;
        k -= temp;
    }
    cout << ans << endl;
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