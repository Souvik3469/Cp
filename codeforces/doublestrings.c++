#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> nums(n);
        unordered_set<string> s;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            s.insert(nums[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (nums[i].size() == 1)
            {
                cout << "0";
                continue;
            }
            bool yes = true;
            for (int j = 0; j < nums[i].size(); j++)
            {
                string l = nums[i].substr(0, j);
                string r = nums[i].substr(j, nums[i].size());
                // cout << l << " : " << r << endl;
                if (s.count(l) && s.count(r))
                {
                    cout << "1";
                    yes = false;
                    break;
                }
            }
            if (yes)
                cout << "0";
        }
        cout << "\n";
    }
}