#include<stdio.h>
int main()
{
    long long int k,p,i,t,n,x=0;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        x=0;
        scanf("%lld%lld%lld",&n,&k,&p);
        x=k+p;
        if(x>n)
        {
            while(1)
            {
                if(x<=n)break;
                x=x-n;
            }
        }
        printf("Case %lld: %lld\n",i,x);
    }
    return 0;
}
