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
    // ll t;
    ll l, r;

    int n, x;
    string s;
    cin >> s;
    n = s.size();
    int t;
    if (s[0] == '9')
        cout << 9;
    else if ((s[0] - '0') >= 5)
        cout << 9 - (s[0] - '0');
    else
        cout << (s[0] - '0');
    for (int i = 1; i < n; i++)
    {
        int c = s[i] - '0';

        if (c >= 5)
        {
            t = 9 - c;
            cout << t;
        }
        else
            cout << c;
    }
    cout << endl;

    return 0;
}