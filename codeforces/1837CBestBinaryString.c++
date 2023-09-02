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
    string s;
    cin >> s;
    int q = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
            q++;
    }
    if (q == 0)
    {
        cout << s << endl;
        return;
    }
    int c0 = 0;
    int c1 = 0;

    if (n == 1 && s[0] == '?')
    {
        cout << 0 << endl;
        return;
    }
    if (n == 2)
    {
        if (s == "??")
            s = "00";
        else if (s == "0?")
            s = "00";
        else if (s == "1?")
            s = "11";
        else if (s == "?0")
            s = "00";
        else if (s == "?1")
            s = "11";
        cout << s << endl;
        return;
    }

    if (s[0] == '?' && n > 2)
    {
        if (s[1] == '?')
        {
            s[0] = '0';
        }
        else
            s[0] = s[1];
    }

    if (s[0] == '0')
        c0++;
    else if (s[0] == '1')
        c1++;

    // cout<<s[0]<<"*";
    for (int i = 1; i < n - 1; i++)
    { //??01?  00

        if (s[i] == '0')
        {
            c0++;
            c1 = 0;
        }
        if (s[i] == '1')
        {
            c1++;
            c0 = 0;
        }
        if (s[i] == '?')
        {
            if (s[i - 1] == '0' && s[i + 1] == '0')
            {
                s[i] = '0';
                c0++;
            }
            else if (s[i - 1] == '1' && s[i + 1] == '1')
            {
                s[i] = '1';
                c1++;
            }
            else if (s[i - 1] == '0' && s[i + 1] == '1')
            {
                if (c0 >= c1)
                {
                    s[i] = '0';
                    c0++;
                }
                else
                {
                    s[i] = '1';
                    c1++;
                }
            }
            else if (s[i - 1] == '1' && s[i + 1] == '0')
            {
                if (c0 >= c1)
                {
                    s[i] = '0';
                    c0++;
                }
                else
                {
                    s[i] = '1';
                    c1++;
                }
            }
            else if (s[i + 1] == '?')
            {
                if (c0 >= c1)
                {
                    s[i] = '0';
                    c0++;
                }
                else
                {
                    s[i] = '1';
                    c1++;
                }
            }
        }
        // cout<<s[i]<<"*";
    }

    if (s[n - 1] == '?' && n > 2)
    {
        s[n - 1] = s[n - 2];
    }
    // cout<<s[n-1]<<"*";
    // cout<<endl;
    cout << s << endl;
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
