#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 10000+10;

vector<ll>v[N];
vector<ll>store;
bool color[N];

void dfs(ll u)
{
    color[u]=true;
    for(ll i=0; i<v[u].size(); i++)
    {
        ll V=v[u][i];
        if(!color[V]) dfs(V);
    }
}
int main()
{
    ll t;
    ll n,m;
    cin>>t;
    ll c=1;
    while(t--)
    {
        cin>>n>>m;
        memset(color,0,sizeof(color));
        for(ll i=0; i<=n; i++)
        {
            v[i].clear();
        }

        store.clear();
        while(m--)
        {
            ll x,y;
            cin>>x>>y;
            v[x].push_back(y);
        }
        int M=0;
        for(ll i=1; i<=n; i++)
        {
            if(!color[i])
            {
                dfs(i),store.push_back(i);
            }
        }
        memset(color,0,sizeof(color));
        M=0;
        for(ll i=store.size()-1; i>=0; i--)
        {
            if(!color[store[i]])
            {
                dfs(store[i]);
                M++;
            }
        }

        cout<<"Case "<<c<<": "<<M<<endl;
        c++;
    }
    return 0;
}
