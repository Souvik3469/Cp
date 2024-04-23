#include <bits/stdc++.h>
#include <cmath>

#define ll long long
#define ull unsigned long long
#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define in_range(i, x, y) for (int i = x; i <= y; i++)
#define in_range_back(i, x, y) for (int i = y; i >= x; i--)

#define ff first
#define ss second

using namespace std;

bool iss(char ch)
{

    if (ch > 'a' && ch < 'z')
        return true;
    else
        return false;
}
bool isc(char ch)
{

    if (ch > 'A' && ch < 'Z')
        return true;
    else
        return false;
}
bool issorted(vector<int> &b, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] > b[i + 1])
            return false;
    }
    return true;
}
bool isr(string a, string b)
{
    int n = a.length();
    int m = b.length();
    if (n != m)
        return false;
    int i = 0;
    int j = m - 1;
    while (i < n && j >= 0)
    {
        if (a[i] != b[j])
            return false;
        i++;
        j--;
    }
    return true;
}

bool ispal(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

bool seive(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
            return true;
    }

    return false;
}
bool comp(pair<ll, ll> &p1, pair<ll, ll> &p2)
{
    if (p1.ff > p2.ff)
        return true;
    else if (p1.ff < p2.ff)
        return false;
    else
        return p1.ss < p2.ss;
}

int lleft(int idx, vector<int> &a)
{

    int n = a.size();

    int c = 0;
    int num = a[idx];

    for (int i = idx; i >= 0; i--)
    {
        if (a[i] <= num)
        {
            c++;
            num = a[i];
        }
        else
        {
            break;
        }
    }
    return c;
}

int rright(int idx, vector<int> &a)
{

    int n = a.size();

    int c = 0;
    int num = a[idx];

    for (int i = idx + 1; i < n; i++)
    {
        if (a[i] <= num)
        {
            c++;
            num = a[i];
        }
        else
        {
            break;
        }
    }
    return c;
}
int cs(vector<int> &a, int n)
{
    int j, r = -1;

    for (int i = 0; i < n; i++)
    {
        for (j = i; j < n - 1 && a[j + 1] >= a[j]; j++)
            ;
        for (j; j < n - 1 && a[j + 1] <= a[j]; j++)
            ;
        if (j - i + 1 > r)
        {
            r = j - i + 1;
        }
    }
    return r;
}

bool possible(vector<ll> &a, ll n, ll k, ll mid)
{
    for (ll i = 0; i < n; i++)
    {
        ll t = k;

        for (ll j = i; j < n; j++)
        {
            ll req = mid - (j - i);

            if (a[j] >= req)
                return true;

            ll need = max(req - a[j], 1LL * 0);

            if (t < need)
                break;

            t -= need;
        }
    }

    return false;
}
// ll n,m,t;
ll C(ll n, ll m)
{
    ll ans = 1;
    for (ll i = 1; i <= m; i++)
    {
        ans = ans * (n - m + i) / i;
    }
    return ans;
}

bool cmp(int x, int y)
{
    return x > y;
}
bool p(vector<int> &a, int mid)
{

    int s = mid + 1;
    int e = a.size() - mid;

    set<int> st;
    for (auto x : a)
    {
        if (x > s && x <= e && !st.count(x - 1))
            return 0;
        else
            st.insert(x);
    }
    return 1;
}

void solve()
{

    vector<string> a(2);
    cin >> a[0] >> a[1];
    queue<array<int, 2>> unblock;
    int t, q;
    cin >> t >> q;
    int w = 0;
    for (int i = 0; i < a[0].size(); i++)
    {
        if (a[0][i] != a[1][i])
            w++;
    }
    for (int time = 1; time <= q; time++)
    {
        int x;
        while (unblock.size() && unblock.front()[0] == time)
        {
            x = unblock.front()[1];
            unblock.pop();
            if (a[0][x] != a[1][x])
                w++;
        }
        cin >> x;
        if (x == 1)
        {
            cin >> x;
            x--;
            if (a[0][x] != a[1][x])
                w--;
            unblock.push({time + t, x});
        }
        else if (x == 2)
        {
            cin >> x;
            int y;
            cin >> y;
            x--;
            y--;
            char tempa = a[x][y];
            if (a[0][y] != a[1][y])
                w--;
            int x1, y1;
            cin >> x1 >> y1;
            x1--;
            y1--;
            char tempb = a[x1][y1];
            if (a[0][y1] != a[1][y1])
                w--;
            a[x][y] = tempb;
            a[x1][y1] = tempa;
            if (a[0][y] != a[1][y])
                w++;
            if (a[0][y1] != a[1][y1])
                w++;
        }
        else
        {
            if (w == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
/*
   void dbg(){

    srand(time(NULL));
    int c=1;
    while(c<=1000){
        int n=rand()%5+1;
      vector<int>a(n);
        for(int i=0;i<n;i++)
        a[i]=rand()%7+1;
        int cans=cs(a,n);
        int mans=solve(a,n);
        if(cans!=mans){
            cout<<n<<endl;
            for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<endl;
            break;
        }
        c++;
    }
}

*/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    int tt;

    // // ll l, r;
    cin >> tt;

    while (tt--)
    {

        solve();
    }
    // dbg();

    return 0;
}
