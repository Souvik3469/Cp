#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        string n, x;
        cin >> n;
        int d;
        int f = 0;
        /* for (int i = 1; i <= n; i++)
         {
             int c = 0;
             int m = i;
             while (m != 0)
             {
                 d = m % 10;
                 if (d != 0)
                     c++;
                 m /= 10;
             }
             if (c == 1)
                 f++;
         }
         cout << f << endl;*/
        int ans;
        ans = (n[0] - '0') + (9 * n.size()) - 9;

        cout << ans << endl;
    }
    return 0;
}
/*
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

        cin >> s;

        int c = 0;

        // else if (s[i] == '1')
        // {
        //     if (i % 2 == 0)
        //         cout << "-";
        //     else
        //         cout << "+";
        // }
        // else c0++;
        string res = "+";
        /* if (s[0] == '1')
             c++;
         for (int i = 1; i < n; i++)
         {
             // if (s[i] == '1')
             //     // cout << "+";
             //     c1++;
             if (s[i] == '0')
                 // cout << "+";
                 res += '+';
             else
             {
                 if (c == 0)
                 {
                     res += '+';
                     c++;
                 }
                 else
                 {
                     res += '-';
                     c--;
                 }
             }
                 }
         cout << res << endl;*/
/* for (int i = 0; i < n - 1; i++)
 {
     if (s[i] == '1')
     {
         if (res == "+")
             res = "-";
         else
             res = "+";
     }
     cout << res;
 }
 cout << endl;
}
return 0;
}*/