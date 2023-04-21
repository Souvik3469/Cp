#include <bits/stdc++.h>
#include <cmath>

#define ll long long
#define ull unsigned long long
#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

#define ff first
#define ss second

using namespace std;
bool isc(char c)
{
    if ((c >= 'a' && c <= 'z') || c == ' ')
        return true;
    else
        return false;
}

void f(string str)
{

    //     ll n; cin >> n;
    //     ll arr[n];
    //     for(int i = 0; i < n; i++) cin >> arr[i];
    //     sort(arr, arr+n);
    //     if(arr[n-1]==0) {
    //         cout << 0 << endl;
    //         return;
    //     }
    //     ll sum = 0;
    //     for(int i = 0; i < n-1; i++) {
    //         sum += arr[i];

    stack<char> st;
    int c = 0;
    for (char ch : str)
    {
        if (ch == '(' || ch == '[')
        {
            st.push(ch);
        }
        // else if(isc(st.top()))
        // continue;
        else
        {
            if (
                (ch == ')' && st.top() != '(') ||
                (ch == ']' && st.top() != '['))
            {
                cout << 0;
                return;
            }
            if (!isc(ch))
            {
                st.pop();
                c++;
            }
        }
    }
    if (st.empty())
    {
        cout << 1 << " " << c;
        return;
    }
    else
    {
        cout << 0 << " ";
        return;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    // fastread();
    // int tt;

    // // ll l, r;
    // cin >> tt;

    // while (tt--)
    // {

    //     solve();
    // }
    string str;
    getline(cin, str);
    // cin>>str;
    f(str);
    cout << endl;
    // cout<<str;

    return 0;
}
// input (c([od]er)) b(yt[e])
// output 1 5