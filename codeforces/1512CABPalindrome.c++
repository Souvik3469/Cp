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

    int a, b;
    cin >> a >> b;

    string s;
    cin >> s;
    /*
    int z=0;
    int o=0;
     for(int i=0;i<s.length();i++)
     {
         if(s[i]=='0')
         z++;
         else if(s[i]=='1')
         o++;
     }

     int zz=a-z;
     int oo=b-o;

    int i=0;
    int j=s.length()-1;
    while(i<s.length()&&j>=0){
        // if((s[i]=='0'&&s[j]=='0')||(s[i]=='1'&&s[j]=='1'))
        // {
        //     i++;
        //     j--;
        // }
        if(zz==0&&oo==0)
        break;
        if(s[i]=='0'&&s[j]=='?')
        {
            if(zz>0)
            {
                s[j]='0';
                zz--;

            }
        }
           else if(s[i]=='1'&&s[j]=='?')
        {
            if(oo>0)
            {
                s[j]='1';
                oo--;

            }
        }
            else if(s[i]=='?'&&s[j]=='1')
        {
            if(oo>0)
            {
                s[i]='1';
                oo--;

            }
        }
            else if(s[i]=='?'&&s[j]=='0')
        {
            if(zz>0)
            {
                s[i]='0';
                zz--;

            }
        }
           else if(s[i]=='?'&&s[j]=='?')
        {
            if(zz>0)
            {
                s[i]='0';
                s[j]='0';
                zz-=2;

            }
            else
            {
                s[i]='1';
                s[j]='1';
                oo-=2;
            }
        }

        i++;
        j--;
    }
    int q=0;
    for(int i=0;i<s.length();i++)
     {
         if(s[i]=='?')
        q++;
     }
     if(q>0)
     {
         cout<<-1<<endl;
         return;
     }
    if(ispal(s))
    cout<<s<<endl;
    else
    cout<<-1<<endl;*/

    int n = a + b;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
            s[i] = s[n - i - 1];
    }
    a -= count(s.begin(), s.end(), '0');
    b -= count(s.begin(), s.end(), '1');
    for (int i = 0; i <= n / 2; i++)
    {
        if (i != n - i - 1 && s[i] == '?')
        {
            if (a > 1)
                s[i] = s[n - 1 - i] = '0', a -= 2;
            else if (b > 1)
                s[i] = s[n - 1 - i] = '1', b -= 2;
        }
        else if (s[i] == '?')
        {
            if (a)
                s[i] = '0', a--;
            else
                s[i] = '1', b--;
        }
    }
    string v = s;
    reverse(v.begin(), v.end());
    if (v == s && a == 0 && b == 0)
        cout << s << endl;
    else
        cout << "-1" << endl;
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
