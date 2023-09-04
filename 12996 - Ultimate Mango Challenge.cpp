#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t,i,j,n,a[50],b[50],Lim;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        long long int s=0,flag=0;
        cin>>n>>Lim;
        for(j=1; j<=n; j++)
        {
            cin>>a[j];
            s+=a[j];
        }
        for(j=1; j<=n; j++)
        {
            cin>>b[j];
        }
        if(Lim<s)
        {
            flag=1;
        }
        else
        {
          for(j=1;j<=n;j++)
          {
              if(a[j]>b[j])
              {
                  flag=1;
              }
          }
        }
        if(flag==1)
        {
            printf("Case %lld: No\n",i);
        }
          else if(flag==0)
        {
            printf("Case %lld: Yes\n",i);
        }

    }

    return 0;
}
