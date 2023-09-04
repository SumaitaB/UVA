#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool table[2010][2010];
ll value[2010];
int main()
{
    ll n,m,i,j,k,x,y,d,res;
    while(cin>>n>>m)
    {
        if(m==0 && n==0)break;

        memset(value,0,sizeof(value));
        memset(table,false,sizeof(table));

        for(i=1; i<=m; i++)
        {
            cin>>x>>y>>d;
            table[x][y]=true;
            value[x]++;
            if(d==2)
            {
                table[y][x]=true;
                value[y]++;
            }
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(table[i][j]==true)
                {
                    for(k=1; k<=n; k++)
                    {
                        if(table[k][i] && !table[k][j])
                        {
                            table[k][j]=true;
                            value[k]++;
                        }
                    }
                }
            }
        }
        res=1;
        for(i=1; i<=n; i++)
        {
            if(value[i]!=n)
            {
                res=0;
                break;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
