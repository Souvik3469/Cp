
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
        cin >> s;
        if (s[1] == '+')
            x += 1;
        else
            x -= 1;
    }
    cout << x << endl;
    return 0;
}