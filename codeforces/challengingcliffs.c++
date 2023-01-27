#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define M 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    long long t, n, a, k;
    long long ar[200009];
    // ll l, r;
    cin >> t;
    while (t--)
    {
        cin >> n, k = 1e9 + 9;
        for (int i = 1; i <= n; i++)
            cin >> ar[i];
        sort(ar + 1, ar + 1 + n);
        for (int i = 2; i <= n; i++)
            if (ar[i] - ar[i - 1] < k)
                a = i, k = ar[i] - ar[i - 1];
        cout << ar[a - 1] << " ";
        for (int i = a + 1; i <= n; i++)
            cout << ar[i] << " ";
        for (int i = 1; i < a - 1; i++)
            cout << ar[i] << " ";
        cout << ar[a] << endl;
    }
    return 0;
}