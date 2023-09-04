#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void DFS(const vector<vector<ll> > &dominos, vector<bool> &visited, vector<ll> &topoSort, ll u)
{
    visited[u] = true;
    for (ll i = 0; i<dominos[u].size(); i++)
    {
        ll v = dominos[u][i];
        if (! visited[v])
            DFS(dominos, visited, topoSort, v);
    }
    topoSort.push_back(u);
}

int main()
{
   ll T;
    cin>>T;
    while ( T-- )
    {
        ll n, m;
        cin >> n >> m;

        vector<vector<ll> > dominos(n + 1);
        vector<bool> visited(n + 1, false);
        vector<ll> topoSort;

        for (ll i = 0; i < m; ++i)
        {
            ll u, v;
            cin>>u>>v;
            dominos[u].push_back(v);
        }
        for (ll u=1; u<=n; u++)
            if (!visited[u])
                {DFS(dominos, visited, topoSort, u);}

        reverse(topoSort.begin(), topoSort.end());


    visited.assign(n+1, false);
       ll knock = 0;
        for (ll i=0; i<n; i++)
        {
            ll u=topoSort[i];
            if (!visited[u])
            {
                DFS(dominos, visited, topoSort, u);
                knock++;
            }
        }
        cout<<knock<<endl;
    }
    return 0;
}
