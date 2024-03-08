#include <bits/stdc++.h>
using namespace std;
void f(int n, int s[], int a[])
{

    long long ans = 0;
    vector<int> v(n, 0);
    sort(s, s + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!v[j] && ((i % 2 == 0) == (s[i] < a[j])))
            {
                long long x = (s[i] - a[j]);
                ans += x;
                v[j] = 1;
                break;
            }
        }
    }

    cout << ans << endl;
}

int main()
{
    int n;
    cin >> n;
    int s[n];
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> s[i];

    f(n, s, a);
    return 0;
}