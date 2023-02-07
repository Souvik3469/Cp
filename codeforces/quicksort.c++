#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define M 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
// int partition(int arr[], int s, int e)
// {

//     int pivot = arr[s];

//     int cnt = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (arr[i] <= pivot)
//         {
//             cnt++;
//         }
//     }

//     // place pivot at right position
//     int pivotIndex = s + cnt;
//     swap(&arr[pivotIndex], &arr[s]);

//     int i = s, j = e;

//     while (i < pivotIndex && j > pivotIndex)
//     {

//         while (arr[i] <= pivot)
//         {
//             i++;
//         }

//         while (arr[j] > pivot)
//         {
//             j--;
//         }

//         if (i < pivotIndex && j > pivotIndex)
//         {
//             swap(&arr[i++], &arr[j--]);
//         }
//     }

//     return pivotIndex;
// }

// void quickSort(int arr[], int s, int e)
// {

//     // base case
//     if (s >= e)
//         return;

//     int p = partition(arr, s, e);

//     quickSort(arr, s, p - 1);

//     quickSort(arr, p + 1, e);
// }

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    ll t;
    ll l, r;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        //  ll a, b, c;
        string s;
        cin >> n >> k;
        // cin >> s;
        vector<int> ar(n);
        ll sum;

        int c = 0;
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        // int sum=0;
        //  for(int i=0;i<n;i++)
        //  sum+=ar[i];
        int y = 1;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == y)
            {
                c++;
                y++;
            }
        }
        if (is_sorted(ar.begin(), ar.end()))
            cout << 0 << endl;
        else
        {

            //  for(int i=0;i<n;i++)
            //  {
            // if(ar[i]+1!=ar[i+1])

            int ans = n - c;
            int res = ans / k;
            if (ans % k != 0)
            {
                cout << res + 1 << endl;
            }

            else
            {

                //     cout << ((n - c) / k) << endl;
                cout << res << endl;
            }
        }
    }
    return 0;
}