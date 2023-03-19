#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>

#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define take_the_array_INT(x, o, n) \
    for (int i = o; i <= n; i++)    \
    {                               \
        scanf("%d", &x[i]);         \
    }
#define int_in2(x, y) scanf("%d %d", &x, &y)
#define int_out(x) printf("%d", x)
#define all(x) x.begin(), x.end()
#define in_range(i, x, y) for (int i = x; i <= y; i++)
#define in_range_back(i, x, y) for (int i = y; i >= x; i--)
#define nl printf("\n")
#define ff first
#define ss second

using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int len(int x)
{
    int res = 0;
    while (x != 0)
    {
        res++;
        x /= 10;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    priority_queue<int> pqA, pqB;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pqA.push(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        pqB.push(b[i]);
    }

    int ans = 0;
    while (!pqA.empty() and !pqB.empty())
    {
        int x = pqA.top();
        int y = pqB.top();
        if (x == y)
        {
            pqA.pop();
            pqB.pop();
        }
        else if (x > y)
        {
            pqA.pop();
            pqA.push(len(x));
            ans++;
        }
        else if (y > x)
        {
            pqB.pop();
            pqB.push(len(y));
            ans++;
        }
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
    int tt;
    // ll l, r;
    cin >> tt;
    while (tt--)
    {

        solve();
    }
    return 0;
}
