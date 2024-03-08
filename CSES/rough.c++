#include <bits/stdc++.h>
#include <cmath>

#define ll long long
#define ld long double
#define ull unsigned long long
#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define in_range(i, x, y) for (int i = x; i <= y; i++)
#define in_range_back(i, x, y) for (int i = y; i >= x; i--)

#define ff first
#define ss second

using namespace std;
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

ll power(long long x, ll y, ll p)
{
    int res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
               // equal to p

    if (x == 0)
        return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (1LL * res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (1LL * x * x) % p;
    }
    return res;
}

bool ispower(ll n, ll b)
{
    if (n == 0)
        return false;
    // return (ceil(log(n)/log(b)))==(floor(log(n)/log(b)));
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

    return false;
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
void solve()
{
    string s;
    cin >> s;

    ll n = s.size();

    for (ll i = 0; i < n; i++)
    {

        if (s[i] == '8' || s[i] == '0')
        {
            cout << "YES" << endl;
            cout << s[i] << endl;
            return;
        }
    }
    if (n >= 2)
    {

        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                ll num = (s[i] - '0') * 10 + (s[j] - '0');
                if (num % 8 == 0)
                {
                    cout << "YES" << endl;
                    cout << num << endl;
                    return;
                }
            }
        }
        cout << "NO" << endl;
        return;
    }
    if (n >= 3)
    {

        for (ll i = 0; i < s.size(); i++)
        {
            for (ll j = i + 1; j < s.size(); j++)
            {
                for (ll k = j + 1; k < s.size(); k++)
                {

                    int num = (s[i] - '0') * 100 + (s[j] - '0') * 10 + s[k] - '0';

                    if (num % 8 == 0)
                    {
                        cout << "YES" << endl;
                        cout << num << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "NO" << endl;
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
    // ll n;
    // cin>>n;
    // pr(n);
    // cout<<primes[n]<<endl;

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
