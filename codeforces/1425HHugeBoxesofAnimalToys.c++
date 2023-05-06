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
    bool ar[4] = {0};
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    ar[((a + b) % 2) * 2] = true;
    ar[((a + b) % 2) * 2 + 1] = true;
    if (b + c == 0)
        ar[1] = true, ar[2] = true;
    if (a + d == 0)
        ar[0] = true, ar[3] = true;
    for (int i = 0; i < 4; i++)
    {
        if (ar[i])
            cout << "Tidak"
                 << " ";
        else
            cout << "Ya"
                 << " ";
    }
    cout << "\n";
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