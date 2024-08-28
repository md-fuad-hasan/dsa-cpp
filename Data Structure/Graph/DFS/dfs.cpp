#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adjList[], int node, bool vis[], vector<int> &res)
{

    res.push_back(node);
    vis[node] = true;
    for (auto it : adjList[node])
    {
        if (!vis[it])
        {
            dfs(adjList, it, vis, res);
        }
    }
}

vector<int> dfsOfList(vector<int> adjList[], int n)
{
    vector<int> res;
    bool vis[n + 1] = {false};
    int start = 0;

    dfs(adjList, start, vis, res);

    return res;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> adjList[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    vector<int> ans = dfsOfList(adjList, n);

    for (auto a : ans)
        cout << a << ' ';
    cout << endl;

    return 0;
}