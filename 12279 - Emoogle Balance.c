#include<stdio.h>
int main()
{
    long long int i,n,zero=0,nonzero=0,x,balance=0,count=1;
    while(1)
    {
        zero=0,nonzero=0;
        scanf("%lld",&n);
        if(n==0)break;
        if(count==75)break;
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&x);
            if(x==0)
            {
                zero++;
            }
            else
            {
                nonzero++;
            }
        }
        balance=nonzero-zero;
        printf("Case %lld: %lld\n",count,balance);
         count++;
    }
    return 0;
}
