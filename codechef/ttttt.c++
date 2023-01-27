// Problem Code:JOINING
// solution by Balaji
#include <vector>
#include <iostream>
#include <map>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stack>
using namespace std;

int roundup(int a, int b)
{
    if (a % b == 0)
    {
        return a / b;
    }
    else
        return (a / b) + 1;
}

bool isprime(int n)
{ // QUICKEST WAY TO DETERMINE IF A NUMBER IS PRIME OR NOT
    for (int i = 2; i < sqrt(n) + 1; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve(int z)
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    bool t = true;
    while (v.size() != 0)
    {
        if (t)
        {
            cout << v[0] << " ";
            v.erase(v.begin());
            t = 0;
        }
        else
        {
            if (v.size() == 1)
            {
                cout << v[0] << " ";
                break;
            }
            else
            {
                cout << v[1] << " ";
                v.erase(v.begin() + 1);
            }
            t = 1;
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    vector<int> v;
    int i = 0;
    while (true)
    {
        if (pow(2, i) > 1000000000)
        {
            break;
        }
        v.push_back(pow(2, i));
        i++;
    }
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        while (n > 0)
        {
            vector<int>::iterator itr = lower_bound(v.begin(), v.end(), n);
            if (v[itr - v.begin()] == n)
            {
                break;
            }
            else
            {
                n -= v[itr - v.begin() - 1];
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}