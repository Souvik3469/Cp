int gc(int m, int n)
{
    if (n != 0)
        return gc(n, m % n);
    else
        return m;
}
