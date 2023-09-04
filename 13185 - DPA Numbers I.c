#include<stdio.h>
int main()
{
    long long int n,i,sum=0,d=0,j,t;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%lld",&n);
        sum=0;
        for(i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                d=n/i;
                if(d!=i)
                {
                    sum+=d+i;
                }
                else if(i==d)
                {
                    sum=sum+d;
                }
            }
        }
        if((sum-n)==n)
        {
        printf("perfect\n",n);
        }
        else if((sum-n)>n)
        {
        printf("abundant\n",n);
        }
         else if((sum-n)<n)
        {
        printf("deficient\n",n);
        }
    }
    return 0;
}
