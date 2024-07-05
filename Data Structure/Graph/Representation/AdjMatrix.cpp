#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int adjMat[n + 1][n + 1];

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            adjMat[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjMat[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}

// Input

// 1,2
// 1,3
// 2,4
// 3,4
// 3,5
// 4,5