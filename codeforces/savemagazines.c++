#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    ll t, n, ans, i, j, min_v;

    ll l, r;
    cin >> t;
    while (t--)
    {
        /*int n, x;
        int a, b, c;
        string s;
        cin >> n;
        int ar[n];
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int sum = 0;

        if (s[0] == '1')
            sum += ar[0];
        else
            sum += 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1' && s[i - 1] == '0' && ar[i - 1] > ar[i])
                sum += ar[i - 1];
            else if (s[i] == '1')
                sum += ar[i];
        }
        cout << sum << endl;*/
        string a;
        cin >> n;
        cin >> a;

        ll box[n];

        for (i = 0; i < n; i++)
        {
            cin >> box[i];
        }
        ans = 0;
        for (i = n - 1; i >= 0;)
        {

            if (a[i] == '1')
            {
                min_v = box[i];
                while (i >= 0)
                {
                    min_v = min(min_v, box[i]);
                    if (a[i] == '1')
                    {
                        ans = ans + box[i];
                        i--;
                    }
                    else
                    {
                        ans = ans + box[i];
                        i--;
                        ans = ans - min_v;
                        break;
                    }
                }
            }
            else
            {
                i--;
            }
        }

        cout << ans << endl;
    }
    return 0;
}