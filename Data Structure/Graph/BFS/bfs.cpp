#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<int> adjList[], int n)
{
    vector<int> res;

    bool visited[n + 1] = {false};
    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (!q.empty())
    {
        int t = q.front();
        res.push_back(t);
        q.pop();

        for (auto it : adjList[t])
        {
            if (!visited[it])
            {
                q.push(it);
                visited[it] = true;
            }
        }
    }

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

    vector<int> ans = bfs(adjList, n);

    for (auto a : ans)
        cout << a << ' ';
    cout << endl;

    return 0;
}