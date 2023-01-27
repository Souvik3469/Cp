#include <bits/stdc++.h>

using namespace std;
void s(int n, int ans)
{

    for (int i = 0; i < n; i++)
    {
        int p;
        p = n - pow(2, i);
        if (p == 0)
        {
            cout << ans;
            return;
        }
        else if (p < 0)
        {
            ans++;
            n = n - pow(2, i - 1);
            s(n, ans);
            return;
        }
    }
}
int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n;
        int ans = 0;
        s(n, ans);
        cout << endl;
    }
    return 0;
}
