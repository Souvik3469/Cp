#include <bits/stdc++.h>

using namespace std;
void solve(int n, string s)
{
    map<pair<char, char>, int> mp;
    pair<char, char> prev = {s[0], s[1]};
    mp[prev]++;
    for (int i = 2; i < n; i++)
    {
        pair<char, char> p = {s[i - 1], s[i]};
        if (mp[p] != 0)
        {
            if ((p == prev && mp[p] > 1) || (p != prev))
            {
                cout << "YES" << endl;
                return;
            }
        }
        prev = p;
        mp[p]++;
    }
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        solve(n, s);
    }
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 10;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n < 4)
    {
        printf("NO\n");
        return;
    }
    for(int i=0;i<n-3;i++)
        for(int j=i+2;j<n-1;j++)
            if (s[i] == s[j] && s[i + 1] == s[j + 1])
            {
                printf("YES\n");
                return;
            }
    printf("NO\n");
    return;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}*/