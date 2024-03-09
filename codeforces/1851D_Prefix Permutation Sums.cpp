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
    ll n;
    cin >> n;
    vector<ll> a(n - 1);
    unordered_map<ll, ll> mp;

    set<int> s;
    s.insert(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        mp[a[i]]++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        s.insert(i + 1);
    }
    auto x = s.find(a[0]);
    auto y = s.find(a[n - 2]);
    ll idx = 0;
    ll idx1 = 0;
    ll c = 0;

    idx = -1;
    c = 1;

    if (x != s.end())
    {
        s.erase(x);
    }
    else
    {
        if (idx == -1)
        {
            idx = a[0];
            idx1 = a[1];
        }
        else
            c = 0;
    }
    ll last = -1;
    ll c1 = 0;
    ll temp = 0;
    ll i = 1;
    while (i < n - 1)
    {
        temp = a[i] + a[i - 1];
        int d = a[i] - a[i - 1];
        auto fx = s.find(d);
        // cout<<fx<<"&";

        if (temp != 0)
            last = i;
        if (fx != s.end())
        {
            s.erase(fx);
        }
        else
        {
            if (idx == -1)
                idx = d;
            else
            {
                c = 0;
                c1++;
                break;
            }
        }
        i++;
    }

    if (c == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        int s1 = 0;
        for (auto x : s)
            s1 += x;
        if (idx != -1)
        {

            if (s1 == idx)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            ll zz = n * (n + 1) / 2;
            ll xx = zz - a[n - 2];

            if (xx == s1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    /*
int n,k;
cin>>n>>k;
vector<int>a(n-1);

for(int i=0;i<n;i++)
cin>>a[i];


unordered_map<int,int>mp;

for(int i=0;i<n;i++){
mp[a[i]]++;

}
int c=0;
// for(int i=0;i<n;i++){
// if(a[i]==a[0])
// c++;
// }

int f=n-1;
for(int i=0;i<n;i++){
if(a[i]==a[0])c++;
if(c==k){

f=i;
break;
}
}

int x=mp[a[0]];
if(x<k)
{
cout<<"NO"<<endl;
return;
}
else
{
if(a[0]==a[n-1]){
cout<<"YES"<<endl;
return;
}
}
int xx=0;
for(int i=n-1;i>=f;i--){
if(a[i]==a[n-1])
xx++;
}
if(xx<k)
cout<<"NO"<<endl;
else cout<<"YES"<<endl;
//int y=mp[n-1];
// if(mp[a[n-1]]<k)
// {
//     cout<<"NO"<<endl;
//     return;
// }

//     cout<<"YES"<<endl;





// if(f==1)
// cout<<"YES"<<endl;
// else
// cout<<"NO"<<endl;*/
}

signed main()
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
