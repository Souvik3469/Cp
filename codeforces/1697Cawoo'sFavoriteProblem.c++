#include <bits/stdc++.h>
#include <cmath>

#define ll long long
#define ull unsigned long long
#define pb push_back
// #define mod 1000000007
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

#define ff first
#define ss second

using namespace std;
bool isc(char c)
{
    if ((c >= 'a' && c <= 'z') || c == ' ')
        return true;
    else
        return false;
}

void solve()
{

    //     ll n; cin >> n;
    //     ll arr[n];
    //     for(int i = 0; i < n; i++) cin >> arr[i];
    //     sort(arr, arr+n);
    //     if(arr[n-1]==0) {
    //         cout << 0 << endl;
    //         return;
    //     }
    //     ll sum = 0;
    //     for(int i = 0; i < n-1; i++) {
    //         sum += arr[i];
    ll n, i, j, n1, a_i, b_i, c_i;
    string a, b;

    cin >> n;
    a_i = b_i = c_i = -1;

    cin >> a;
    cin >> b;

    n1 = 0;

    queue<ll> qa, qb, qc;

    for (i = 0; i < n; i++)
    {
        if (a[i] == 'a')
        {
            qa.push(i);
        }
        else if (a[i] == 'b')
        {
            qb.push(i);
        }
        else
        {
            qc.push(i);
        }
    }

    if (qa.empty() == false)
    {
        a_i = qa.front();
    }

    if (qb.empty() == false)
    {
        b_i = qb.front();
    }

    if (qc.empty() == false)
    {
        c_i = qc.front();
    }

    for (i = 0; i < n; i++)
    {
        if (b[i] == 'a')
        {
            if (a_i == -1)
            {
                break;
            }
            else if ((a_i < b_i || b_i == -1) && (a_i < c_i || c_i == -1))
            {
                n1++;
                qa.pop();

                if (qa.empty() == false)
                {
                    a_i = qa.front();
                }
                else
                {
                    a_i = -1;
                }
            }
            else
            {
                break;
            }
        }
        else if (b[i] == 'b')
        {
            if (b_i == -1)
            {
                break;
            }
            else if ((b_i < a_i || a_i == -1) && (b_i < c_i || c_i == -1))
            {
                n1++;
                qb.pop();

                if (qb.empty() == false)
                {
                    b_i = qb.front();
                }
                else
                {
                    b_i = -1;
                }
            }
            else
            {
                if (c_i == -1 || c_i > b_i)
                {
                    n1++;

                    qb.pop();

                    if (qb.empty() == false)
                    {
                        b_i = qb.front();
                    }
                    else
                    {
                        b_i = -1;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            if (c_i == -1)
            {
                break;
            }
            else if ((c_i < a_i || a_i == -1) && (c_i < b_i || b_i == -1))
            {
                n1++;
                qc.pop();

                if (qc.empty() == false)
                {
                    c_i = qc.front();
                }
                else
                {
                    c_i = -1;
                }
            }
            else
            {
                if (a_i == -1 || a_i > c_i)
                {
                    n1++;

                    qc.pop();

                    if (qc.empty() == false)
                    {
                        c_i = qc.front();
                    }
                    else
                    {
                        c_i = -1;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        // cout<<a_i<<" "<<b_i<<" "<<c_i<<"\n";
    }
    // cout<<n1<<" ";
    if (n1 == n)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    fastread();
    int tt;

    // // ll l, r;
    cin >> tt;

    while (tt--)
    {

        solve();
    }

    return 0;
}