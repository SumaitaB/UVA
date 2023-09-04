#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int i,k,j,n,m,x,y;
    while(1)
    {
        scanf("%lld",&k);
        if(k==0)break;
        scanf("%lld%lld",&n,&m);
        for(i=1; i<=k; i++)
        {
             scanf("%lld%lld",&x,&y);
             if(y==m||x==n)
             {
                     printf("divisa\n");
             }
              else if(x>n&&y>m)
             {
                  printf("NE\n");
             }
              else if(x<n&&y>m)
             {
                 printf("NO\n");
             }
              else if(x<n&&y<m)
             {
                  printf("SO\n");
             }
               else if(x>n&&y<m)
             {
                  printf("SE\n");
             }

        }
    }
    return 0;
}
