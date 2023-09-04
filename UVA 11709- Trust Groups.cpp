#include<bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MAXN = 50000+5;

vector<ll> edges[1005];
vector<ll> redges[1005];
stack<ll> nodes;
bool vis[1005];

void reset(ll n)
{
    ll i;
    for(i=0; i<n; i++)
    {
        vis[i] = false;
        redges[i].clear();
        edges[i].clear();
    }
}

void DFS(ll u)
{
    vis[u] = true;
    ll i;
    for(i=0; i<edges[u].size(); i++)
    {
        ll v = edges[u][i];
        if(!vis[v])
        {
            DFS(v);
        }
    }
    nodes.push(u);
}

void DFS2(ll u)
{
    vis[u] = true;
    ll i;
    for(i=0; i<redges[u].size(); i++)
    {
        ll v = redges[u][i];
        if(!vis[v])
        {
            DFS2(v);
        }
    }
}


int main()
{

    ll p, t;
    while(cin>>p>>t && p!=0)
    {
        reset(p);
        map<pair<string, string>, ll> mp;
        ll i;
        for(i=0; i<p; i++)
        {
            string a, b;
            cin>>a>>b;
            mp[ {a, b}]=i;
        }

        for(i=0; i<t; i++)
        {
            string a, b, c, d;
            cin>>a>>b>>c>>d;
            ll x, y;
            x = mp[ {a, b}];
            y = mp[ {c, d}];
            edges[x].push_back(y);
            redges[y].push_back(x);
        }

        ll ans = 0;

        for(i=0; i<p; i++)
        {
            if(!vis[i])
            {
                DFS(i);
            }
        }

        memset(vis, false, sizeof(vis));

        while(!nodes.empty())
        {
            ll src = nodes.top();
            nodes.pop();
            if(!vis[src])
            {
                DFS2(src);
                ans++;
            }
        }

        cout<<ans<<endl;
    }
    return 0;

}
