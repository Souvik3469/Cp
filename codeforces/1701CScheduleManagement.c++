#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long a[n];
        memset(a, 0, sizeof(a));
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            a[--x]++;
        }
        int l = 0, r = 2 * m;
        while (l < r)
        {
            int mid = (l + r) / 2;
            long long time = 0, work = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] <= mid)
                    time += (mid - a[i]) / 2;
                else
                    work += (a[i] - mid);
            }
            if (time >= work)
                r = mid;
            else
                l = mid + 1;
        }
        cout << l << endl;
    }
}