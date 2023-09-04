#include<bits/stdc++.h>
using namespace std;
int t;
int dis[99999];
int l[99999];
int vis[99999];
int source[99999];
vector< pair<int, int> > con;
vector<int> a[99999];
pair<int, int> p;

void links(int x)
{
    int i;
    vis[x]=true;
    l[x]=dis[x]=t++;
    for(i=0; i<a[x].size(); i++)
    {
        int v=a[x][i];
        if(!vis[v])
        {
            source[v]=x;
            links(v);
            l[x]=min(l[x],l[v]);
            if(l[v]>dis[x])
            {
                p.first=x, p.second=v;
                if(x>v)
                {
                    swap(p.first, p.second);
                }
                con.push_back(p);
            }
        }
        else if(source[x]!=v)
        {
            l[x]=min(l[x], dis[v]);
        }
    }
    return;
}

int main()
{
    int n,u,v;
    int i,j,k;
    int nn;

    while(scanf("%d", &n)==1)
    {
        t=0;
        for(i=0; i<99999; i++)
        {
            vis[i]=0;
            a[i].clear();
        }
        for(i=0; i<n; i++)
        {
            scanf("%d", &u);
            scanf(" (%d)",&nn);
            for(j=0; j<nn; j++)
            {
                cin>>v;
                a[u].push_back(v);
            }
        }

        con.clear();
        for(i=0; i<n; i++)
        {
            if(!vis[i])
            {
                links(i);
            }
        }
        sort(con.begin(), con.end());
        cout<<con.size()<<" critical links"<<endl;
        for(i=0; i<con.size(); i++)
        {
            cout<<con[i].first<<" - "<<con[i].second<<endl;
        }
        cout<<endl;
    }
    return 0;
}
