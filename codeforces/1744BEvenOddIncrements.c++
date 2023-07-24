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
bool issorted(vector<int> &b, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] > b[i + 1])
            return false;
    }
    return true;
}
bool isr(string a, string b)
{
    int n = a.length();
    int m = b.length();
    if (n != m)
        return false;
    int i = 0;
    int j = m - 1;
    while (i < n && j >= 0)
    {
        if (a[i] != b[j])
            return false;
        i++;
        j--;
    }
    return true;
}

bool ispal(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
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
    //

    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> b(q);
    vector<ll> c(q);
    vector<pair<ll, ll>> p(q);
    ll e = 0;
    ll o = 0;
    ll s = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            e++;
        else
            o++;
        s += a[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> b[i] >> c[i];
        p[i] = {b[i], c[i]};
    }

    for (int i = 0; i < q; i++)
    {
        // 3 3
        // 1 2 4
        // 0 2
        // 1 3
        // 0 5

        if (p[i].first == 0) // 7+4+3+10
        {
            s = s + (e * (p[i].second));
            if (p[i].second % 2 != 0)
            {
                o += e;
                e = 0;
            }
        }
        else if (p[i].first == 1)
        {
            s = s + (o * (p[i].second));
            if (p[i].second % 2 != 0)
            {
                e += o;
                o = 0;
            }
        }
        cout << s << endl;
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
