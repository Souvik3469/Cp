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
    string s;
    cin >> s;
    int o = 0;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            o++;
        else
            t++;
    }
    if (t == 1 || t == 2)
    {
        cout << "NO" << endl;
        return;
    }

    // vector<vector<int>> ans(n);
    char ans[n][n];
    for (int i = 0; i < n; i++)
    {
        int x = 1;
        for (int j = i; j < n; j++)
        {

            if (i == j)
            {
                ans[i][j] = 'X';
                continue;
            }

            //           X+--
            // =X--
            // ++X-
            // +++X

            // ans[i][j]='=';

            else if (s[i] == '1')
            {

                ans[i][j] = '=';

                ans[j][i] = '=';
            }
            else if (s[i] == '2')
            {
                if (x == 1 && s[j] == '2')
                {
                    ans[i][j] = '+';
                    ans[j][i] = '-';
                    x = 2;
                }
                else
                {
                    ans[i][j] = '-';
                    ans[j][i] = '+';
                }
            }
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
    //   cout<<endl;
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