/*#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
                f = 1;
            else
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
            cout << -1 << endl;
        else
        {
            vector<char> v1;
            vector<char> v2;
            vector<char> v;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                    v1.push_back(i);
                else
                    v2.push_back(i);
            }
            if (v1.size() > v2.size())
            {
                for (int i = 0; i < v1.size(); i++)
                {
                    v.push_back(v1[i]);
                }
            }
            else
            {
                for (int i = 0; i < v2.size(); i++)
                {
                    v.push_back(v2[i]);
                }
            }
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i];
            }
        }
    }
    return 0;
}*/
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
        //  cin >> s;
        // n, m, k;
        cin >> n;
        cin >> s;

        int c = 1;
        int ans;
        int f = 0;
        int c0 = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '0')
                c0++;
            else
            {
                if (s[i] == '1')
                {
                    if (i % 2 == 0)
                        f = 0;
                    else
                        f = 1;
                }
            }
        }

        cout << 1 << " ";
        for (int i = 1; i < n - 1; i++)
        {

            // if(s[i]=='0')
            // c=(n-1);
            // else
            // c++;
            if (s[i] == s[i - 1])
                c++;
            else
                c = 1;
            ans = i + 2;

            cout << ans - c << " ";
        }
        cout << endl;
    }
    return 0;
}
