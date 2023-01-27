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
void l(int *arr, int n, int k)
{

    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    ll t;
    // ll l, r;
    cin >> t;
    while (t--)
    {
        int n, x;
        int a, b, c;
        string s;
        cin >> n;
        // cin >> s;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        vector<int> ans(n);
        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];

        //  for(int i=0;i<n;i++){

        //}
        for (int i = n - 1; i >= 0; i--)
        {

            int j;
            for (j = 0; j < i; j++)
            {
                if (ar[j] == i + 1)
                    break;
            }
            if (j == i)
                j = -1;
            l(ar, i + 1, j + 1);
            ans[i] = j + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}