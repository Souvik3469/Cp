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
bool comp(pair<int, int> &p1, pair<int, int> &p2)
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

// ll n,m,t;
int C(int n, int m)
{
    int ans = 1;
    for (int i = 1; i <= m; i++)
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

int LIS(vector<int> &nums)
{
    vector<int> dp(nums.size(), 1);
    for (int i = 0; i < nums.size(); i++)
        for (int j = i - 1; j >= 0; j--)
            if (nums[i] > nums[j])
                dp[i] = max(dp[i], 1 + dp[j]);
    return *max_element(dp.begin(), dp.end());
}

int f1()
{
    ll y;
    cin >> y;
    cout << endl;
    return y;
}

bool isf(vector<int> &a, int n)
{

    for (int i = 1; i < n - 1; i++)
    {
        if (!((a[i - 1] < a[i] && a[i] > a[i + 1]) || (a[i - 1] > a[i] && a[i] < a[i + 1])))
        {
            return false;
        }
    }
    return true;
}

vector<int> r(vector<int> &a, int n)
{
    for (int i = 1; i < n - 1; i += 2)
    {
        if (a[i] == a[i - 1])
            swap(a[i], a[i + 1]);
    }
    return a;
}
int mex(vector<int> &arr, int N)
{

    // sort the array
    sort(arr.begin(), arr.end());

    int mex = 0;
    for (int idx = 0; idx < N; idx++)
    {
        if (arr[idx] == mex)
        {
            // Increment mex
            mex += 1;
        }
    }

    // Return mex as answer
    return mex;
}
bool f(ll mid, ll x, vector<ll> &a, ll n)
{
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mid >= a[i])
            s += (mid - a[i]);
        // s+=max(0,a[i]-mid);
    }
    if (s <= x)
        return true;
    else
        return false;
}
bool check(vector<ll> &h, vector<ll> &a, int len, ll k)
{
    ll totalFruits = 0;
    ll gcd = h[0];

    for (int i = 0; i < len; i++)
    {
        totalFruits += a[i];
        gcd = __gcd(gcd, h[i]);
    }

    for (int i = len; i < h.size(); i++)
    {
        if (gcd == 1 && totalFruits <= k)
        {
            return true;
        }
        totalFruits += a[i];
        gcd = __gcd(gcd, h[i]);
        totalFruits -= a[i - len];
    }

    return (gcd == 1 && totalFruits <= k);
}
// void fdigit(ll &c, ll &s, ll &n)
// {

//     while (n != 0)
//     {
//         int d = n % 10;
//         s += d;
//         c++;
//         n /= 10;
//     }
// }

ll fdigitc(ll n)
{
    ll c = 0;
    while (n != 0)
    {
        c++;
        n /= 10;
    }
    return c;
}
ll fdigits(ll n)
{
    ll s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
void solve()
{

    ll n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll, ll> mp;
    set<ll> st;
    string s;
    // ll c = 0;
    ll ans = 0;
    vector<vector<ll>> dp1(n, vector<ll>(9, 0));
    map<ll, map<ll, ll>> dp;
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    for (auto x : a)
    {
        // ll c = 0;
        // ll s = 0;
        // fdigit(c, s, x);
        ll s = fdigits(x);
        ll c = fdigitc(x);
        dp[c][s]++;
    }
    vector<ll> b;
    for (auto x : a)
        b.pb(x);
    // sort(a.begin(), a.end());
    ll temp = 0;
    for (auto x : a)
    {
        // ll s = 0;
        // ll c = 0;

        ll s = fdigits(x);
        ll c = fdigitc(x);
        // fdigit(c, s, x);
        string str = to_string(x);
        for (auto y : {0, 1})
        {
            ll xx = 0;
            temp++;
            // string str=to_string(x);
            ll sz = str.size();
            for (ll i = 0; i < sz; i++)
            {
                // if(temp>0)
                // ans+=dp[y][i];
                if (y != 0)
                {
                    ll req = str[i] - '0';
                    xx += req;
                }
                else
                {
                    ll req1 = str[sz - i - 1] - '0';
                    xx += req1;
                }
                // xx += req1;
                // cout<<xx<<" ";
                ll temp1 = sz - i - 1;
                ll temp2 = sz - i;
                ll temp3 = i;

                ll temp4 = i - temp1 + 1;
                ll temp5 = xx + xx - s;
                // cout<<"Temp5="<<temp5<<" "<<"temp4="<<temp4<<" ";
                if (temp5 > 0 && temp4 > 0)
                {
                    ll res = dp[temp4][temp5];
                    // cout<<res<<" ";
                    ans += res;
                }
            }
        }
    }

    for (auto x : dp)
    {
        for (auto y : x.ss)
        {
            ll res1 = (y.ss * y.ss);
            ans -= res1;
        }
    }
    cout << ans << endl;
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

signed main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input1.txt", "r", stdin);
    //     freopen("output1.txt", "w", stdout);
    // #endif
    fastread();
    int tt;

    // // ll l, r;
    // cin >> tt;

    // while (tt--)
    // {

    //     solve();
    // }
    // dbg();

    // for (int i = 1; i <= tt; i++)
    // {
    // cout << "Case #" << i << ": ";
    solve();
    // }

    return 0;
}
