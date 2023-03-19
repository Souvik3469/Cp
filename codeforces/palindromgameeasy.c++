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
    // ll l, r;
    cin >> t;
    while (t--)
    {
        int n, x;

        string s;
        cin >> n;
        cin >> s;
        vector<int> ar(n);
        ll sum;
        // for(int i=0;i<n;i++)
        // cin>>ar[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];

        int z = 0;
        for (auto &i : s)
            z += i == '0';
        if (z % 2 == 1 && z >= 3)
            cout << "ALICE" << endl;
        else
            cout << "BOB" << endl;
        //  for(int i=0;i<n;i++){

        //}
    }
    return 0;
}
