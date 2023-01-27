/*#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t;
    ll l, r;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x; // 7,3
        /*int f1;
        int f2;
        int f;
        int m = 2;
        if (n == 1 || n == 2)
            f = 0;
        else
        {
            while (m)
            {
                f1 = (m - 1) * x + 2;
                f2 = (m * x + 2);
                if (f1 <= n && n <= f2)
                {
                    f = m;
                    break;
                }

                m++;
            }
        }
        cout << f + 1 << endl;*/
/* double f = (n / x);
 int ff = round(f);
 cout << ff + 1 << endl;*/
/* cout << (n < 3 ? 1 : (n - 3) / x + 2) << endl;
}
}
*/
#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

void s()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    /* for (int i = 0; i < n; i++)
     {
         s+=a[i];
         mini=min(mini,a[i]);
         maxi=max(maxi,a[i]);
     }*/
    // int e=0;
    //  int o=0;
    vector<int> odd;
    vector<int> even;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            odd.push_back(a[i]);
        else
            even.push_back(a[i]);
    }
    int o = odd.size();
    int e = even.size();
    int res = INT_MAX;
    if (o % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < o; i++)
    {
        int c = 0;
        while (odd[i] % 2 != 0)
        {
            odd[i] = odd[i] / 2;
            c++;
        }
        res = min(res, c);
    }

    for (int i = 0; i < e; i++)
    {
        int c = 0;
        while (even[i] % 2 != 1)
        {
            even[i] = even[i] / 2;
            c++;
        }
        res = min(res, c);
    }

    /* int i=0;
     while(s%2==0){
         a[i]=floor(a[i]/2);
         c++;
         i++;
     }*/
    cout << res << endl;
}
int main()
{
    // fastread();
    int t;
    cin >> t;
    while (t--)
    {
        s();
    }
    return 0;
}