#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int x,y,n,r;
       cin>>x>>y>>n>>r;
       /* if(r/y>=n){
            cout<<"0 "<<n<<endl;
        }*/
         if (r/x<n)
        {
            cout<<"-1"<<endl;
        }
        else{
            int cy=(r-(x*n))/(y-x);
            /*if((r-(y*n))%(x-y)!=0){
                cx=cx+1;
            }*/
            cy=min(cy,n);
            cout<<n-cy<<" "<<cy<<endl;
        }
    }
	return 0;
}
