#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n;
        /*  for(int i=0;i<n;i++){
              cin>>a[i];
          }*/
        /*for(int i=0;i<n;i++){
                    v.push_back(a[i]);
                }
                int c=0;
                sort(v.begin(),v.end());
                int mini=v[0];
                for(int i=0;i<n;i++){
                    nxtmini=v[i-1];
                    d=v[i]-nxtmini;*/

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a > 0)
                s.insert(a);
        }
        cout << (int)s.size() << "\n";
    }
    return 0;
}
