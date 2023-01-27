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
vector<int> d(vector<int> &arr, int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;

    if (i < n)
    {

        n = n - 1;
        for (int j = i; j < n; j++)
            arr[j] = arr[j + 1];
    }

    return arr;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    ll t;
    ll l, r;
    cin >> t;
    while (t--)
    {
        ll n, x = 0;
        int a, b, c;
        string s;
        cin >> n;
        // cin >> s;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        bool f = false;
        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];
        // int f = 0;

        // if (n == 1 && ar[0] % 2 != 0)
        //     f = 1;
        // else
        // {
        //     if (n == 2 && ar[0] == ar[1])
        //         f = 1;

        //     else if (is_sorted(ar.begin(), ar.end()))
        //         f = 0;
        //     else
        //         f = 1;
        // }
        // // for (int i = 1; i < n; i++)
        // // {
        // //     if ((ar[i] % (i + 1)) == 0)
        // //     {
        // //         // ar[i] = ar[i + 1];
        // //         i--;
        // //         n--;
        // //         // ar = d(ar, n, ar[i]);
        // //     }
        // // }
        // // cout << n << endl;
        // // if (n == 0)
        // //     f = 1;
        // // else
        // //     f = 0;
        // if (n > 1 && ar[1] - ar[0] == 1)
        //     f = 1;
        // if (f == 1)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            ll in = i + 2;
            if (arr[i] % in != 0)
                x++;
            else
            {
                f = false;
                for (int j = 1; j <= x; j++)
                {
                    if (arr[i] % (in - j) != 0)
                    {
                        x++;
                        f = true;
                        break;
                    }
                }
                if (f == false)
                {
                    // cout << "NO" << endl;
                    k = 0;
                    break;
                }
            }
        }
        if (k == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}