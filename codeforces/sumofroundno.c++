#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t;
    ll l, r;
    int x = 0;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        // cin >> s;
        cin >> n;
        int c;
        c = 0;
        int d;
        vector<int> v;
        int res;
        while (n != 0)
        {
            d = n % 10;

            if (d != 0)
            {
                res = d * (pow(10, c));
                v.push_back(res);
            }
            c++;

            n = n / 10;
        }
        cout << v.size() << endl;
        for (int i = v.size() - 1; i >= 0; i--)
            cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}