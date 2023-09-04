#include<bits/stdc++.h>
using namespace std;


vector<int> v[99999];
int n, m,t;
int vis[99999],fl[99999];

int dfs(int q, int p)
{
    int i;
    int nx = vis[q] = ++t;
    fl[q]=1;
    for(i=0; i<v[q].size(); i++)
    {
        int y;
        y=v[q][i];
        if(y==p)
        {
            continue;
        }
        if(vis[y])
        {
            nx = min(nx, vis[y]);
        }
        else
        {
            int ny = dfs(y, q);
            nx = min(nx, ny);
            if(ny >= vis[q])
            {
                fl[q]++;
            }
        }
    }
    return nx;
}
bool compare(const pair<int, int> A, const pair<int, int> B)
{
    if(A.second > B.second)
    {
        return true;
    }
    if(A.second == B.second && A.first < B.first)
    {
        return true;
    }
    return false;
}
int main()
{
    int i;
    while(cin>>n>>m, n+m)
    {
        int a, b;
        memset(vis, 0, sizeof(vis));
        for(i = 0; i<n; i++)
        {
            v[i].clear();
        }

        while(cin>>a>>b,a+b>0)
        {
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(0,0);
        fl[0]--;
        vector<pair<int, int> > c;
        for(i=0; i<n; i++)
        {
            c.push_back(make_pair(i, fl[i]));
        }
        sort(c.begin(), c.end(), compare);
        for(int i=0; i<m; i++)
        {
            cout<<c[i].first<<" "<<c[i].second<<endl;

        }
        putchar(10);
    }
    return 0;
}
