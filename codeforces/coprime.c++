// #include <iostream>

// using namespace std;
// int max(int a, int b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }
// int gc(int m, int n)
// {
//     if (n != 0)
//         return gc(n, m % n);
//     else
//         return m;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int v[];

//         for (int i = 1; i <= n; i++)
//         {
//             cin >> v[i];
//         }
//         int s = 0;
//         int maxi = -1;

//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {

//                 if (gc(v[i], v[j]) == 1)
//                 {
//                     s = i + j;
//                     maxi = max(s, maxi);
//                 }
//             }
//         }
//         cout << maxi << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n;
        scanf("%d", &n);
        map<int, int> t;
        for (int i = 0; i < n; ++i)
        {
            int c;
            scanf("%d", &c);
            t[c] = i + 1;
        }
        int a = -1;
        for (int i = 0; i < 1001; ++i)
        {
            for (int j = i; j < 1001; ++j)
            {
                if (gcd(i, j) == 1 && t[i] > 0 && t[j] > 0)
                {
                    a = max(t[i] + t[j], a);
                }
            }
        }
        printf("%d\n", a);
    }
}