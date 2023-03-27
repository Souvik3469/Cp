#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>

#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define take_the_array_INT(x, o, n) \
    for (int i = o; i <= n; i++)    \
    {                               \
        scanf("%d", &x[i]);         \
    }
#define int_in2(x, y) scanf("%d %d", &x, &y)
#define int_out(x) printf("%d", x)
#define all(x) x.begin(), x.end()
#define in_range(i, x, y) for (int i = x; i <= y; i++)
#define in_range_back(i, x, y) for (int i = y; i >= x; i--)
#define nl printf("\n")
#define ff first
#define ss second

using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int len(int x)
{
    int res = 0;
    while (x != 0)
    {
        res++;
        x /= 10;
    }
    return res;
}

void solve()
{
    int n, m;

    cin >> n >> m;

    string s1 = "", s2 = "";

    string temp = "";

    bool flag = true;

    cin >> s1 >> s2;

    for (int i = 0; i + 1 < n; i++)
    {

        if (s1[i] == s1[i + 1])
        {

            temp = s1.substr(i + 1, n);

            // cout<<"temp is "<<temp<<endl;

            flag = false;

            break;
        }
    }

    if (!flag)
    {

        reverse(temp.begin(), temp.end());

        s2 += temp;

        for (int i = 0; i + 1 < s2.size(); i++)
        {

            if (s2[i] == s2[i + 1])
            {

                cout << "NO" << endl;

                return;
            }
        }
    }

    temp = "";

    flag = true;

    for (int i = 0; i + 1 < m; i++)
    {

        if (s2[i] == s2[i + 1])
        {

            temp = s2.substr(i + 1, m);

            flag = false;

            break;
        }
    }

    if (!flag)
    {

        reverse(temp.begin(), temp.end());

        s1 += temp;

        for (int i = 0; i + 1 < s1.size(); i++)
        {

            if (s1[i] == s1[i + 1])
            {

                cout << "NO" << endl;

                return;
            }
        }
    }

    cout << "YES" << endl;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    int tt;
    // ll l, r;
    cin >> tt;
    while (tt--)
    {

        solve();
    }
    return 0;
}
