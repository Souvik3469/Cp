#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout<<b<<" "<<c<<" "<<c<<endl;
        int x = a;
        int y = b;
        int z = c;

        /* while (x <= b && y <= c && z <= d)
          {
              if (x + y > z && y + z > x && z + x > y)
              {
                  /*  m = x;
                    n = y;
                    o = z;*/
        /*     break;
         }
         x++;
         y++;
         z++;
     }*/
        // int m, n, o;
        // while (x <= b)
        // {
        //     if (x + y > z && y + z > x && z + x > y)
        //     {
        //         m = x;

        //         break;
        //     }
        //     x++;
        // }
        // while (y <= c)
        // {
        //     if (x + y > z && y + z > x && z + x > y)
        //     {
        //         n = y;
        //         break;
        //     }
        //     y++;
        // }
        // while (z <= d)
        // {
        //     if (x + y > z && y + z > x && z + x > y)
        //     {
        //         o = z;
        //         break;
        //     }
        //     z++;
        // }
        // cout << m << " " << n << " " << o << endl;
    }
    return 0;
}
/*if(a<=x&&x<=b&&b<=y&&y<=c&&c<=z&&z<=d){

}*/