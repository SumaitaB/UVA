#include<bits/stdc++.h>

using namespace std;

const int INF = 9999999999;
int d[2000];
vector<int> v[2000];
int vis[2000];
vector< pair<int, int> > a;




int links(int n, int m, int q)
{
    int r = INF,i;
    d[n] = q;
    vis[n] = 1;

    for(i = 0; i < v[n].size(); i++)
    {
        int x=v[n][i];
        if(x==m)	continue;
        if(!vis[x])
        {
            int b = links(x, n, q+1);
            if(b > q)
                a.push_back(make_pair(n, x));
            r=min(r, b);
        }
        else
        {
            r= min(r, d[x]);
        }
    }
    return r;
}
int main()
{
    int n, m, q, x, y,i,j;
    for (int u=0;;u++)
    {
        cin>>n>>m;
        if(n==0&&m==0)break;
        for(i=0; i<n; i++)
        {
            v[i].clear();
        }
        for(i = 0; i < m; i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }

        a.clear();
        memset(vis, 0, sizeof(vis));
        for(i=0; i<n; i++)
        {
            if(!vis[i])
            {
                links(i,-1,0);
            }
        }
        for (i = 0; i < a.size(); i++)
        {
            if (a[i].first > a[i].second)
                swap(a[i].first, a[i].second);
        }
        sort(a.begin(), a.end());
        cout<<(a.size());
        for (i = 0; i < a.size(); i++)
        {
            cout<<" "<<a[i].first<<" "<<a[i].second;
        }
        puts("");
    }
    return 0;
}

