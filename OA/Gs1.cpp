void ff()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<pair<ll, ll>> a(k);

    for (ll i = 0; i < k; i++)
        cin >> a[i].first >> a[i].second;
    ll r, t;
    cin >> r;
    cin >> t;
    ll tot = r * t;
    ll ans = 0;

    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= m; j++)
        {
            ll z = 0;
            for (auto x : a)
            {
                auto x1 = x.first;
                auto y1 = x.second;
                auto x2 = i - x1;
                auto y2 = j - y1;
                auto b = x2 * x2 + y2 * y2;
                auto b1 = tot * tot;
                if (b <= b1)
                {
                    z = 1;
                    break;
                }
            }
            if (z == 0)
                ans++;
        }
    }
    cout << ans << endl;
}