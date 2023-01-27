#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;

    while (T--)
    {
        int n, x;
        int s = 0;
        int s1 = 0;
        int s2 = 0;
        int f = 0;
        cin >> n;
        int a[100000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            s += a[i];
        }
        for (int i = 0; i < n; i++)
        {

            s1 += a[i];
            s2 = s - s1;

            if ((s1 * s2) % 2 != 0)
            {
                f = 1;
                break;
            }
            else
                f = 0;
        }
        if (f == 1)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }

    return 0;
}