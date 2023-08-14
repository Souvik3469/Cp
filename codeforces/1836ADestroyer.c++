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

    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    // if(a[0]!=0)
    // {
    //     cout<<"NO"<<endl;
    //     return;
    // }

    if (n == 1)
    {
        if (a[0] != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        return;
    }
    sort(a.begin(), a.end());

    // for(int i=0;i<n-1;i++){

    //     // if(a[i+1]-a[i]>1)
    //     // {
    //     //     cout<<"NO"<<endl;4 2 4 3 1 2 2 4 1 3
    //     //     return;
    //     // }
    //     if(a[i]!=a[i+1]){
    //     if(mp[a[i]]<mp[a[i+1]])
    //     {
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    //     }
    // }

    for (int i = 0; i < a[n - 1]; i++)
    {
        if (mp[i] < mp[i + 1])
        {
            cout << "NO" << endl;
            return;
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
    ll tt;

    // // ll l, r;
    cin >> tt;

    while (tt--)
    {

        solve();
    }

    return 0;
}
