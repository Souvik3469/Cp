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
    ll t;
    ll l, r;
    cin >> t;
    while (t--)
    {
        ll n, m, k, i, j, f, left;
        // int a, b, c;
        string s;
        cin >> n >> m >> k;
        // cin >> s;
        // int ar[k];
        // for (int i = 0; i < k; i++)
        //     cin >> ar[i];

        // int f = 0;
        //  if (is_sorted(ar, ar + k))
        //      f = 1;
        //  else
        //      f = 0;
        //  int sum=0;
        //   for(int i=0;i<n;i++)
        //   sum+=ar[i];
        f = 0;

        ll a[k];

        j = k;
        for (i = 0; i < k; i++)
        {
            cin >> a[i];
        }

        left = n * m - 2;
        priority_queue<ll> pq;

        for (i = 0; i < k; i++)
        {

            while (!pq.empty())
            {
                if (pq.top() == j)
                {
                    pq.pop();
                    j--;
                    left++;
                }
                else
                {
                    break;
                }
            }

            if (a[i] == j)
            {
                if (left >= 2)
                {
                    j--;
                }
                else
                {
                    f = 1;
                    break;
                }
            }
            else
            {
                if (left > 0)
                {
                    left--;
                    pq.push(a[i]);
                }
                else
                {
                    f = 1;
                    break;
                }
            }
        }

        if (f == 0)
        {
            cout << "YA" << endl;
        }
        else
        {
            cout << "TIDAK" << endl;
        }
        //  for(int i=0;i<n;i++){

        //}
        // if (k > n * m || is_sorted(ar, ar + k))
        //     f = 1;
        // if (f == 1)
        //     cout << "TIDAK" << endl;
        // else
        //     cout << "YA" << endl;
    }
    return 0;
}