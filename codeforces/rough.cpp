#include <bits/stdc++.h>

#include <cmath>

#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define ld long double
#define ull unsigned long long
#define ordered_set tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>

#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define in_range(i, x, y) for (int i = x; i <= y; i++)
#define in_range_back(i, x, y) for (int i = y; i >= x; i--)
#define debug(x) cout << #x << " -> " << x << endl

#define ff first
#define ss second

using namespace std;
using namespace __gnu_pbds;
const ll mod = 1e9 + 7;
const ll mod1 = 998244353;
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
ll fceil(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    else
        return a / b + 1LL;
}
/************DEBUG**************/
void debugv(vector<ll> &v)
{
    cout << "Vector" << endl;
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}
void debugp(vector<pair<ll, ll>> &v)
{
    cout << "Pair" << endl;
    for (auto x : v)
        cout << x.ff << " " << x.ss << "    ";
    cout << endl;
}
void debugm(map<ll, ll> &mp)
{
    cout << "MAP" << endl;
    for (auto x : mp)
        cout << x.ff << " " << x.ss << "     ";
    cout << endl;
}
void debugmat(vector<vector<ll>> &mat)
{
    cout << "MATRIX" << endl;
    for (ll i = 0; i < mat.size(); i++)
    {
        for (ll j = 0; j < mat[0].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
/***************DEBUGEND**************/
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

ll LIS(vector<ll> &nums)
{
    vector<ll> dp(nums.size(), 1);
    for (ll i = 0; i < nums.size(); i++)
        for (ll j = i - 1; j >= 0; j--)
            if (nums[i] > nums[j])
                dp[i] = max(dp[i], 1 + dp[j]);
    return *max_element(dp.begin(), dp.end());
}

bool ispv(vector<ll> &a, ll n)
{

    for (ll i = 1; i < n - 1; i++)
    {
        if (!((a[i - 1] < a[i] && a[i] > a[i + 1]) || (a[i - 1] > a[i] && a[i] < a[i + 1])))
        {
            return false;
        }
    }
    return true;
}

ll mex(vector<ll> &arr, int N)
{

    // sort the array
    sort(arr.begin(), arr.end());

    ll mex = 0;
    for (ll idx = 0; idx < N; idx++)
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
/***********MODULAR*************/
ll modadd(ll a, ll b, ll p)
{
    return (a + b) % p;
}

ll modsub(ll a, ll b, ll p)
{
    return ((a - b) % p + p) % p;
}

ll modmul(ll a, ll b, ll p)
{
    return ((a % p) * (b % p)) % p;
}

ll modinv(ll a, ll p)
{
    // Calculate modular inverse of a
    ll b = p, u = 1, v = 0;
    while (b)
    {
        ll t = a / b;
        a -= t * b;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    u %= p;
    if (u < 0)
        u += p;
    return u;
}
ll modpow(ll x, ll y, ll p)
{
    ll res = 1;

    x = x % p;

    if (x == 0)
        return 0;

    while (y > 0)
    {

        if (y & 1)
            res = (1LL * res * x) % p;

        y = y >> 1;
        x = (1LL * x * x) % p;
    }
    return res;
}
ll modfact(ll n, ll p)
{
    vector<ll> f(n + 1);
    f[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        f[i] = ((i % p) * (f[i - 1] % p)) % p;
    }
    return f[n] % p;
}
/*************MODULAREND**********/
ll power(ll base, ll exponent)
{
    if (exponent == 0)
        return 1;
    if (exponent == 1)
        return base;

    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}
bool ispower(ll n, ll b)
{
    /*if (n == 0)
        return false;

    ll c = 0;
    while (n % b == 0 && n > 1)
    {
        n /= b;
        c++;
    }

    if (n == 1)
    {
        return true;
    }

    return false;*/

    return (fceil(log(n), log(b))) == (floor(log(n) / log(b)));
}

bool primes[2000001];
void pr(ll n)
{
    fill(primes, primes + n + 1, true);
    primes[0] = false;
    primes[1] = false;
    for (ll i = 2; i <= n; i++)
    {
        if (primes[i])
        {
            for (ll j = i * 2; j <= n; j += i)
                primes[j] = false;
        }
    }
}
// map<ll,ll>prev_val;
// ll n;
// ll query(ll idx){
//     if(prev_val.find(idx)!=prev_val.end())return prev_val[idx];
//     if(idx==0||idx==n+1)return LLONG_MAX-1;
//     cout<<"? "<<idx<<endl;
//     ll val;
//     cin>>val;
//     return prev_val[idx]=val;
// }

void rotatematrix(vector<vector<ll>> &a, ll n)
{
    // ll n=a.size();

    for (ll i = 0; i < n / 2; i++)
    {
        for (ll j = i; j < n - i - 1; j++)
        {
            ll t = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - i - 1];
            a[j][n - i - 1] = t;
        }
    }
}
bool isinc(vector<ll> &a, ll n)
{
    for (ll i = 0; i < n; i++)
    {
        if (i + 1 < n and a[i] >= a[i + 1])
            return false;
    }
    return true;
}
ll psum(ll l, ll r, vector<ll> &pr)
{
    if (l == 0)
    {
        return pr[r];
    }
    return pr[r] - pr[l - 1];
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> v;
    for (ll i = 1; i <= n; i++)
    {
        if (a[i - 1] != i)
            v.pb(abs(i - a[i - 1]));
    }
    if (v.empty())
    {
        cout << 0 << endl;
        return;
    }
    sort(v.begin(), v.end());
    cout << v[0] << endl;
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
    ll tt;
    // ll n;
    // cin>>n;
    // pr(n);
    // cout<<primes[n]<<endl;

    cin >> tt;

    // while (tt--)
    // {

    //     solve();
    // }
    // dbg();

    for (int i = 1; i <= tt; i++)
    {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}