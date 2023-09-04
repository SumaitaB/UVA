#include<stdio.h>
int main()
{
    long long int n,x[100005],i,j,typ,count=0,max=-9999999999,d;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        max=-9999999999;
        scanf("%lld",typ);
        if(typ==1)
        {
            scanf("%lld",&x[count]);
            count++;
        }
          else if(typ==2)
        {
         x[count]=0;
         count--;
        }
          else if(typ==3)
        {
          for(d=0;d<=count;d++)
          {
              if(max<x[d])
              {
                  max=x[d];
              }
          }
          printf("%lld\n",max);
        }
    }
    return 0;
}
