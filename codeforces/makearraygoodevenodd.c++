
#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
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