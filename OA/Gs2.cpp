void ff()
{

    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> a(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i].ff >> a[i].ss;
    if (n == 0)
    {
        cout << 0 << endl;
        return;
    }

    sort(a.begin(), a.end(), cm2);

    vector<pair<ll, ll>> res;
    res.pb(a[0]);
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {

        pair<ll, ll> x1 = res.back();

        if (a[i].ff <= x1.ss)
        {

            ll mx = max(x1.ss, a[i].ss);

            res.back().ss = mx;
        }
        else
        {
            res.pb(a[i]);
        }
    }
    for (auto x : res)
    {

        ans += (x.ss - x.ff);
    }

    cout << ans << endl;
}