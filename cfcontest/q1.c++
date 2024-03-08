
void f(string &a)
{
    deque<int> dq;

    int n = a.size();
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == "PUSH")
        {
            dq.push_back(atoi(a[i + 1]));
        }
        else if (a[i] == "INJECT")
            dq.push_front(atoi(a[i + 1]));
        else if (!dq.empty() && a[i] == "POP")
        {
            v.push_back(atoi(dq.back()));
            dq.pop_back();
        }
        else if (!dq.empty() && a[i] == "EJECT")
        {
            v.push_back(atoi(dq.front()))
                dq.pop_front();
        }

        else if (a[i] == "SHOW")
        {
            for (auto x : v)
                cout << x << " ";
            cout << endl;
            return;
        }
    }
}