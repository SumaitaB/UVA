#include<bits/stdc++.h>
#define ll long long int

using namespace std;


int main()
{
    ll n,m;

    while(1)
    {

        cin>>n>>m;

        if(n==0&&m==0)
        {
            break;
        }
        else
        {

            ll x[n+1];

            vector<ll>adjlist[n+1];

            memset(x,0,sizeof(x));

            ll u,v,i;

            while(m--)
            {
                cin>>u>>v;
                adjlist[u].push_back(v);
                x[v]++;
            }

            queue<ll>q;
            vector<ll>ans;

            for(i=1; i<=n; i++)
            {
                if(x[i]==0)
                {
                    q.push(i);
                }
            }

            while(!q.empty())
            {
                u = q.front();
                q.pop();
                ans.push_back(u);
                for(i=0; i<adjlist[u].size(); i++)
                {
                    v = adjlist[u][i];
                    x[v]--;
                    if(x[v]==0)
                    {
                        q.push(v);
                    }
                }


            }
            for(i=0; i<n; i++)
            {
                if(i)

                {
                    cout<<" ";
                }

                cout<<ans[i];

            }
            cout<<endl;
            ans.clear();
            q.empty();
        }
    }
    return 0;
}


