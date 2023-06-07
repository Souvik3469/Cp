#include <bits/stdc++.h>

using namespace std;
bool iss(int node, int v, int g[4][4], int color[4], int c)
{
    for (int i = 0; i < v; i++)
    {
        if (g[node][i] == 1 && color[i] == c)
            return false;
    }
    return true;
}
bool f(int v, int g[4][4], int color[4], int node, int m)
{
    if (node == v)
        return true;
    for (int i = 1; i <= m; i++)
    {
        if (iss(node, v, g, color, i))
        {
            color[node] = i;
            if (f(v, g, color, node + 1, m))
                return true;
            color[node] = 0;
        }
    }
    return false;
}
int main()
{
    int v = 4;
    // cin >> v;
    // int g[v][v];

    // for (int i = 0; i < v; i++)
    // {
    //     for (int j = 0; j < v; j++)
    //     {
    //         g[i][j] = 0;
    //     }
    // }

    int g[4][4] = {
        {0, 1, 1, 1},
        {1, 0, 1, 0},
        {1, 1, 0, 1},
        {1, 0, 1, 0},
    };

    int color[v];
    for (int i = 0; i < v; i++)
    {
        color[i] = 0;
    }
    int m;
    cin >> m;
    if (f(v, g, color, 0, m))
    {
        for (int i = 0; i < v; i++)
        {
            cout << color[i] << " ";
        }
    }
    else
    {
        cout << "Fuck";
    }
    return 0;
}