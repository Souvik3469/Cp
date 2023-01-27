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
        cin >> n >> x;
        // int a[n];
        // for(int i=1;i<n;i++)
        //   cin>>a[i];
        int in = pow(2, x);
        // a[1]=in/2;
        int e = in / 2;
        int s = in - e;
        int i = 2;
        while (i <= n)
        {
            e = s / 2;
            s = s - e;

            i++;
        }
        std::cout << s << std::endl;
    }
    return 0;
}
