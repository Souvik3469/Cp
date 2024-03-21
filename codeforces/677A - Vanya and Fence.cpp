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
bool issorted(vector<ll> &b, int n)
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
bool ispeak(deque<ll> &dq)
{

    vector<ll> a;
    while (!dq.empty())
    {
        a.pb(dq.front());
        dq.pop_front();
    }
    // for(auto x:a)
    // cout<<x<<"*";
    // cout<<endl;
    int idx = -1;
    int n = a.size();
    ll mx = *max_element(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] = mx)
        {
            idx = i;
            break;
        }
    }
    for (int i = 0; i < idx; i++)
    {
        if (a[i] > mx)
            return false;
    }
    for (int i = idx + 1; i < n; i++)
    {
        if (a[i] > mx)
            return false;
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

    int n, h;
    cin >> n >> h;
    int s = 0;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (auto x : a)
    {

        if (x > h)
            s += 2;
        else
            s++;
    }

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
    // cin>>tt;

    // while (tt--)
    // {

    solve();
    //}

    return 0;
}
