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
void rm(vector<vector<char>> &a, int N)
{

    for (int i = 0; i < N / 2; i++)
    {
        for (int j = i; j < N - i - 1; j++)
        {

            // Swap elements of each cycle
            // in clockwise direction
            int temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }
}
void solve()
{

    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n, 'a'));
    vector<vector<char>> b(n, vector<char>(n, 'a'));
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[i][j];
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << a[i][j] << " ";
    //     cout << endl;
    // }
    // cout << endl;

    rm(b, n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << b[i][j] << " ";
    //     cout << endl;
    // }
    // cout << endl;
    ll c = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vis[i][j] == true)
                continue;
            map<char, int> mp;
            char x1 = a[i][j] - 'a';
            char x2 = a[j][n - i - 1] - 'a';
            char x3 = a[n - i - 1][n - j - 1] - 'a';
            char x4 = a[n - i - j][j] - 'a';
            mp[x1]++;
            mp[x2]++;
            mp[x3]++;
            mp[x4]++;
            // bool y1 = vis[j][n - i - 1];
            // bool y2 = vis[n - i - 1][n - j - 1];
            // bool y3 = vis[n - j - 1][i];
            vis[i][j] = vis[j][n - i - 1] = vis[n - i - 1][n - j - 1] = vis[n - j - 1][i] = true;
            // long long c = 0;
            // long long maxKey = mp.rbegin()->first; // Find the maximum key

            // for (const auto &pair : mp)
            // {
            //     long long key = pair.first;
            //     long long value = pair.second;
            //     c += (maxKey - key) * value;
            // }

            for (auto it = mp.begin(); it != mp.end(); ++it)
            {
                const long long k = it->first;
                const long long v = it->second;
                c += (mp.rbegin()->first - k) * v;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (a[i][j] != b[i][j])
    //         {
    //             c++;
    //         }
    //     }
    // }
    cout << c << endl;
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
