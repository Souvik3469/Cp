#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
/*int min(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;

    else if (b <= a && b <= c)
        return b;

    else
        return c;
}*/
int main()
{
    fastread();
    ll t;
    //  ll l, r;
    int x = 0;
    // cin >> t;

    string s;
    // int n;
    //   cin >> s;
    //  n, m, k;
    int n, k, l, c, d, p, nl, np, al, ad, as, ans, reqd, reql, reqs, nod, nol, nos;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    reqd = n * nl;
    reql = n;
    reqs = n * np;
    al = c * d;
    ad = k * l;
    as = p;
    // if(reqd>dr || reql>tl || reqs>)
    nod = ad / reqd;
    nol = al / reql;
    nos = as / reqs;

    ans = min(nod, min(nol, nos));
    cout << ans << endl;

    return 0;
}