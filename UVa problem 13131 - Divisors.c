#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,i,n,k,x,d,sum=0;
    scanf("%lld",&t);
    for(x=1;x<=t;x++)
    {
        sum=0;
        scanf("%lld%lld",&n,&k);
        for(i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                d=n/i;
                if(i%k!=0)
                {
                    sum+=i;
                }
                if(d!=i&&d%k!=0)
                {
                    sum=sum+d;
                }
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
