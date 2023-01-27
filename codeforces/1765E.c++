// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, i, j, k, a, b;
//         cin >> n >> a >> b;
//         int q = 1;
//         int s = 0;
//         int c = 0;
//         while (s < n)
//         {
//             s = s + (q * a);

//             c++;
//         }
//         cout << c << endl;
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, n;
        cin >> n >> a >> b;
        if (a > b)
            cout << 1 << endl;
        else
            cout << (n + a - 1) / a << endl;
    }
}
