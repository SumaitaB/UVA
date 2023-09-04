#include<bits/stdc++.h>
using namespace std;

vector<int>a[999999];

int d[999999],l[999999],child[999999],sor[999999];
int cl=0;
int nodes[999999]= {0};

bool vis[999999];
set<string>st;
set<string>::iterator it;

map<string,int>mp;
map<int,string>mp1;

int total=0;

void dfs(int q)
{
    vis[q]=true;
    cl++;
    d[q]=cl;
    l[q]=d[q];
    for(int i=0; i<a[q].size(); i++)
    {
        int x=a[q][i];

        if(!vis[x])
        {
            sor[x]=q;
            child[q]++;

            dfs(x);

            if(sor[q]!=-1&&l[x]>=d[q])
            {
                st.insert(mp1[q]);
            }

            if(sor[q]==-1&&child[q]>1)
            {
                st.insert(mp1[q]);
            }

            l[q]=min(l[x],l[q]);
        }

        else if(x!=sor[q])
        {
            if(d[x]<l[q]) l[q]=d[x];
        }
    }
}

int main()
{
    string s,s1,s2;
    int t,n,m;
    int i,u,v,tt=0,cnt=0;

    while(1)
    {

        cin>>n;

        if(n==0)
        {
            return 0;
        }

        tt++;

        if(tt>1)
        {
            cout<<endl;
        }

        memset(vis,0,sizeof(vis));
        memset(l,-1,sizeof(l));
        memset(d,0,sizeof(d));
        memset(child,0,sizeof(child));
        memset(sor,-1,sizeof(sor));

        st.clear();

        mp.clear();

        mp1.clear();

        cl=0;
        total=0;
        cnt=0;

        for(i=0; i<n+10; i++)
        {
            a[i].clear();
        }

        for(i=0; i<n; i++)
        {
            cin>>s;
            cnt++;
            mp[s]=cnt;
            mp1[cnt]=s;
        }

        cin>>m;

        for(i=1; i<=m; i++)
        {
            cin>>s1;
            cin>>s2;

            u=mp[s1];
            v=mp[s2];

            a[u].push_back(v);
            a[v].push_back(u);
        }

        for(i=1; i<=n; i++)
        {
            if(!vis[i])
            {
                dfs(i);
            }
        }

        cout<<"City map #"<<tt<<": "<<st.size()<<" camera(s) found"<<endl;

        for(it=st.begin(); it!=st.end(); it++)
        {
            cout<<*it<<endl;
        }

    }

    return 0;
}
