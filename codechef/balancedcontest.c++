#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n, p, c, h;
        cin >> n >> p;
        int a[100000000];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        c = 0;
        h = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] >= p / 2)
            {
                c++;
            }
            if (a[i] <= p / 10)
            {
                h++;
            }
        }

        if (c == 1 && h == 2)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}