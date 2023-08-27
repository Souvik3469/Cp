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

void solve()
{

    /*
    int q=0;
    int a=0;
    stack<char>st;
    // st.push(s[0]);

    for(int i=0;i<n;i++){

        if(s[i]=='A'&&st.top()=='Q')
        st.pop();
        else if(s[i]=='Q')
        st.push(s[i]);
        else if(s[i]=='A'&&st.empty())
        continue;
    }

    for(int i=0;i<n;i++){
        if(s[i]=='Q')
        q++;
        else
        a++;


    }
    if(st.empty())
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    */
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    // for(int i=0;i<n;i++)
    // cout<<a[i]<<" ";

    ll d[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        d[i] = a[i + 1] - a[i];
    }
    // for(int i=0;i<n-1;i++){
    //   cout<<d[i]<<" ";
    // }
    // cout<<endl;

    // 2050314
    int c = 0; // 1 3 3 4 5 7 8 10
    int idx = 0;
    for (int i = 0; i < (n - 1) / 2; i++)
    {
        if (d[i] > k)
        {
            // idx=i;
            c++;
        }
    }
    int idx1 = 0;
    int c1 = 0;
    for (int i = n - 1; i >= (n - 1) / 2; i--)
    {
        if (d[i] > k)
        {
            idx1 = n - i;
            c1++;
        }
    }
    ll z = 0;
    ll xx = 0;
    ll z1 = 0;
    ll i = 0;
    while (i < n)
    {
        ll j = i + 1;
        while (j < n)
        {
            ll d1 = (a[j] - a[j - 1]);
            if (d1 > k)
                break;
            j++;
        }
        xx = j - i;
        i = j;
        z1 = max(z1, xx);
    }
    // int x1=c+idx;
    // int x2=c1+(idx1);
    ll ans = n - z1;

    // int xx=n-idx-1;
    // int x=min(idx,xx);
    cout << ans << endl;
}

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

    return 0;
}
